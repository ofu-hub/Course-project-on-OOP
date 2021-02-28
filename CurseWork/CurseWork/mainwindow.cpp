#include "mainwindow.h"
#include "ui_mainwindow.h"

double numFirst = 0, numSecond = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Обрабатываем нажатие целых чисел
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));

    // Обрабатываем нажатие дробных чисел (знаменатель)
    connect(ui->pushButton_z0, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z1, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z2, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z3, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z4, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z5, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z6, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z7, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z8, SIGNAL(clicked()), this, SLOT(z_numbers()));
    connect(ui->pushButton_z9, SIGNAL(clicked()), this, SLOT(z_numbers()));

    // Обрабатывам арифметические операции
    connect(ui->pushButton_precent, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_plus_minus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(math_operations()));
    // Нужно для проверки, какая кнопка была нажата
    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_mul->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Обратабываем целые числа
void MainWindow::digits_numbers() {
    ui->label->setText(""); // Очистим сразу поле. Т.к при вводе числа и выбора операции нам нужно видеть старое число.
                            // После выбора операции вводим новое число и тогда label чиститься.
    QPushButton *button = (QPushButton *)sender(); // Обрабатываем нажатие кннопки.

    double all_numbers;
    QString new_label;

    all_numbers = (ui->label->text() + button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 10);

    ui->label->setText(new_label);
}

// Обратабываем дробные числа (знаменатель)
void MainWindow::z_numbers() {

}

// Кнопка точки :)
void MainWindow::on_pushButton_dot_clicked()
{
    if(!(ui->label->text().contains('.'))) // Если точка уже есть в тексте, то зачем её вводить снова?
        ui->label->setText(ui->label->text() + ".");
}

// Операции с числами. Поменять знак или взять процент соответственно if'ам.
void MainWindow::operations() {
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    if(button->text() == "±") {
        all_numbers = (ui->label->text()).toDouble();
        all_numbers *= -1;
        new_label = QString::number(all_numbers, 'g', 10);

        ui->label->setText(new_label);
    } else if(button->text() == "%") {
        all_numbers = (ui->label->text()).toDouble();
        all_numbers *= 0.01;
        new_label = QString::number(all_numbers, 'g', 10);

        ui->label->setText(new_label);
    }
}

// Обработчки операций.
void MainWindow::math_operations() {
    QPushButton *button = (QPushButton *)sender(); // Обработаем кнопку.

    numSecond = ui->label->text().toDouble(); // Возьмем второе число после выбора операции.

    QString new_label;

    if (numFirst == 0) // Если у нас первое число равно 0, то возьмем для него след.
        numFirst = ui->label->text().toDouble();
    else { // Иначе нам надо запонить выбор. Пример: 5 + 5 (в памяти это равно 10, но мы не видим),
           //                                (выберем след операцию) - (выведется 10 и выберем число) 4 = 6.
        double lNum = numFirst + numSecond;
        new_label = QString::number(lNum, 'g', 10);
        numFirst = lNum;
        ui->label->setText(new_label);
    }


    button->setChecked(true); // true на ту кнопку, которая нажата.
}

// Арифметика.
void MainWindow::on_pushButton_equally_clicked()
{
    double lNum;
    QString new_label;
    numSecond = 0;
    numSecond = ui->label->text().toDouble();
    if(ui->pushButton_plus->isChecked()) {
        lNum = numFirst + numSecond;
        new_label = QString::number(lNum, 'g', 10);

        ui->label->setText(new_label);
        ui->pushButton_plus->setChecked(false);
    } else if (ui->pushButton_minus->isChecked()) {
        lNum = numFirst - numSecond;
        new_label = QString::number(lNum, 'g', 10);

        ui->label->setText(new_label);
        ui->pushButton_minus->setChecked(false);
    } else if (ui->pushButton_mul->isChecked()) {
        lNum = numFirst * numSecond;
        new_label = QString::number(lNum, 'g', 10);

        ui->label->setText(new_label);
        ui->pushButton_mul->setChecked(false);
    } else if (ui->pushButton_div->isChecked()) {
        if (numSecond == 0) ui->label->setText("0");
        else {
            lNum = numFirst / numSecond;
            new_label = QString::number(lNum, 'g', 10);

            ui->label->setText(new_label);
        }
        ui->pushButton_div->setChecked(false);
    }
    numFirst = 0;
}

// Очистка всего.
void MainWindow::on_pushButton_AC_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_mul->setChecked(false);
    ui->pushButton_div->setChecked(false);

    ui->label->setText("0");

    numFirst = 0;
    numSecond = 0;
}

// Очистка лишь символа. Может ввели что-то не то?
void MainWindow::on_pushButton_C_clicked()
{
    QString text = ui->label->text();
    text.chop(1);
    if (text.isEmpty()) text = "0";
    ui->label->setText(text);
}
