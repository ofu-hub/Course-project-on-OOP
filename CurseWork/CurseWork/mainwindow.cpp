#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Fraction.h"

double numFirst = 0, numSecond = 0; // Для хранения либо целого числа или дробного.
Fraction first, second;

bool flagInputDig = false; // while label.text = 0 => flag = false;
bool flagFPI_fir = false; // Если true, значит мы считаем (пример: 1/2 + 2);
bool flagFPI_sec = false;
bool flagOutputReal = false; // Если true, значит вместо дроби выводим вещественное число;

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

    // Обрабатываем нажатие дробных чисел (числитель)
    connect(ui->pushButton_ch0, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch1, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch2, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch3, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch4, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch5, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch6, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch7, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch8, SIGNAL(clicked()), this, SLOT(ch_numbers()));
    connect(ui->pushButton_ch9, SIGNAL(clicked()), this, SLOT(ch_numbers()));

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
    //ui->label->setText(""); // Очистим сразу поле. Т.к при вводе числа и выбора операции нам нужно видеть старое число.
                            // После выбора операции вводим новое число и тогда label чиститься.
    QPushButton *button = (QPushButton *)sender(); // Обрабатываем нажатие кннопки.

    double all_numbers;
    QString new_label;

    if (ui->label->text().size() < 9) {
        all_numbers = (ui->label->text() + button->text()).toDouble();
        new_label = QString::number(all_numbers, 'g', 9);
        ui->label->setText(new_label);
    }

    if (ui->label->text() != "0")
        flagInputDig = true;
    else
        flagInputDig = false;
}

// Обратабываем дробные числа (знаменатель)
void MainWindow::z_numbers() {

    QPushButton *button = (QPushButton *)sender(); // Обрабатываем нажатие кннопки.

    ui->label->setGeometry(10, 0, 451, 71);
    if (flagInputDig == false) ui->label->setText("");
    ui->labelZ->setEnabled(true);
    ui->labelCH->setEnabled(true);

    double all_numbers;
    QString new_label;

    if (ui->labelZ->text().size() < 6) {
        all_numbers = (ui->labelZ->text() + button->text()).toDouble();
        new_label = QString::number(all_numbers, 'g', 6);

        ui->labelZ->setText(new_label);
    }
}

// Обратабываем дробные числа (числитель)
void MainWindow::ch_numbers() {

    QPushButton *button = (QPushButton *)sender(); // Обрабатываем нажатие кннопки.

    ui->label->setGeometry(10, 0, 451, 71);
    if (flagInputDig == false) ui->label->setText("");
    ui->labelZ->setEnabled(true);
    ui->labelCH->setEnabled(true);

    double all_numbers;
    QString new_label;

    if (ui->labelCH->text().size() < 6) {
        all_numbers = (ui->labelCH->text() + button->text()).toDouble();
        new_label = QString::number(all_numbers, 'g', 6);

        ui->labelCH->setText(new_label);
    }
}

// Кнопка точки :)
void MainWindow::on_pushButton_dot_clicked() {
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
        new_label = QString::number(all_numbers, 'g', 9);

        ui->label->setText(new_label);
    } else if(button->text() == "%") {
        all_numbers = (ui->label->text()).toDouble();
        all_numbers *= 0.01;
        new_label = QString::number(all_numbers, 'g', 9);

        ui->label->setText(new_label);
    }
}

// Очистка всего.
void MainWindow::on_pushButton_AC_clicked() {
    flagInputDig = false;
    flagFPI_fir = false;
    flagFPI_sec = false;

    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_mul->setChecked(false);
    ui->pushButton_div->setChecked(false);

    ui->label->setGeometry(10, 0, 531, 71);
    ui->labelZ->setEnabled(false);
    ui->labelCH->setEnabled(false);

    ui->label->setText("0");
    ui->labelZ->setText("");
    ui->labelCH->setText("");

    numFirst = 0;
    numSecond = 0;
}

// Очистка лишь символа. Может ввели что-то не то?
void MainWindow::on_pushButton_C_clicked() {
    QString text = ui->label->text();
    text.chop(1);
    if (text.isEmpty()) {
        text = "0";
        flagInputDig = false;
    }
    ui->label->setText(text);
}

// Очистка лишь символа. (числитель)
void MainWindow::on_pushButton_chC_clicked() {
    QString textN = ui->label->text();
    QString text = ui->labelCH->text();
    text.chop(1);
    if (text.isEmpty()) {
        if (ui->labelZ->text() == "0" && ui->labelCH->text() == "0") {
            ui->label->setGeometry(10, 0, 531, 71);
            if (textN.isEmpty()) ui->label->setText("0");
            else ui->label->setText(textN);
            ui->labelZ->setEnabled(false);
            ui->labelCH->setEnabled(false);
        }
        text = "0";
    }
    ui->labelCH->setText(text);
}

// Очистка лишь символа. (знаменатель)
void MainWindow::on_pushButton_zC_clicked() {
    QString textN = ui->label->text();
    QString text = ui->labelZ->text();
    text.chop(1);
    if (text.isEmpty()) {
        if (ui->labelZ->text() == "0" && ui->labelCH->text() == "0") {
            ui->label->setGeometry(10, 0, 531, 71);
            if (textN.isEmpty()) ui->label->setText("0");
            else ui->label->setText(textN);
            ui->labelZ->setEnabled(false);
            ui->labelCH->setEnabled(false);
        }
        text = "0";
    }
    ui->labelZ->setText(text);
}

// Кнопка точки. (знаменатель)
void MainWindow::on_pushButton_dotZ_clicked() {
    if (flagInputDig == false) ui->label->setText("");
    ui->label->setGeometry(10, 0, 451, 71);
    ui->labelZ->setEnabled(true);
    ui->labelCH->setEnabled(true);
    if(!(ui->labelZ->text().contains('.'))) // Если точка уже есть в тексте, то зачем её вводить снова?
        ui->labelZ->setText(ui->labelZ->text() + ".");
}

// Кнопка точки. (числитель)
void MainWindow::on_pushButton_dotCH_clicked() {
    if (flagInputDig == false) ui->label->setText("");
    ui->label->setGeometry(10, 0, 451, 71);
    ui->labelZ->setEnabled(true);
    ui->labelCH->setEnabled(true);
    if(!(ui->labelCH->text().contains('.'))) // Если точка уже есть в тексте, то зачем её вводить снова?
        ui->labelCH->setText(ui->labelCH->text() + ".");
}

// Очистка всего через меню.
void MainWindow::on_action_AC_triggered() {
    on_pushButton_AC_clicked();
}

// Выход через меню.
void MainWindow::on_action_Exit_triggered() {
    qApp->quit();
}

// Автор.
void MainWindow::on_action_Author_triggered() {
    QMessageBox msgBox;
    msgBox.setTextFormat(Qt::RichText);
    msgBox.setText("<p>Автор - Булатов Павел</p><p>Обратная связь: example@text.com</p><p>GitHub: <a href=https://github.com/ofu-hub>github.com/ofu-hub</a></p>");
    msgBox.setWindowTitle("Автор");
    msgBox.exec();
}

// Арифметические операции.
void MainWindow::math_operations() {
    // Берём операцию. (запоминаем)
    QPushButton *button = (QPushButton *)sender(); // Обрабатываем нажатие кннопки.
    // Для начала запишем первое число. Проверим есть ли оно вообще.
    // Если у нас есть числитель и знаменатель, то подсчитаем его сразу.
    if ((ui->labelZ->text() != "") && (ui->labelCH->text() != "")) {
        first.setNum(ui->labelCH->text().toDouble());
        first.setDiv(ui->labelZ->text().toDouble());
        if ((ui->label->text() != "")) { // Если смешанная дробь
            numFirst = ui->label->text().toDouble();
            first.transform(numFirst, first);
        }
        flagFPI_fir = true;
    }
    else // Если нету, значит по сути считаем целые числа
        numFirst = ui->label->text().toDouble();

    ui->label->setGeometry(10, 0, 531, 71);
    ui->labelZ->setEnabled(false);
    ui->labelCH->setEnabled(false);

    ui->label->setText("");
    ui->labelZ->setText("");
    ui->labelCH->setText("");
    button->setChecked(true); // Операция.

}

// Равно.
void MainWindow::on_pushButton_equally_clicked() {
    QString new_label;
    if ((ui->labelZ->text() != "") && (ui->labelCH->text() != "")) {
        second.setNum(ui->labelCH->text().toDouble());
        second.setDiv(ui->labelZ->text().toDouble());
        if ((ui->label->text() != "")) { // Если смешанная дробь
            numSecond = ui->label->text().toDouble();
            second.transform(numSecond, second);
        }
        flagFPI_sec = true;
    }
    else // Если нету, значит по сути считаем целые числа
        numSecond = ui->label->text().toDouble();

    // Тригег кнопок арифметики
    if(ui->pushButton_plus->isChecked()) {
        if (flagFPI_fir == true && flagFPI_sec == false) {
            Fraction result = first + numSecond;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_fir = false;
        }
        else if (flagFPI_sec == true && flagFPI_fir == false) {
            Fraction result = second + numFirst;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_sec = false;
        }
        else if (flagFPI_sec == true && flagFPI_fir == true) {
            qDebug() << second.getDiv() << " " << second.getNum() << "\n";
            qDebug() << first.getDiv() << " " << first.getNum() << "\n";

            Fraction result = second + first;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_sec = false;
            flagFPI_fir = false;
        }
        else if (ui->label->text() != "") {
            double result = numFirst + numSecond;

            new_label = QString::number(result, 'g', 9);
            ui->label->setText(new_label);

            ui->label->setGeometry(10, 0, 531, 71);
            ui->pushButton_plus->setChecked(false);
        }

    }
    else if (ui->pushButton_minus->isChecked()) {
        if (flagFPI_fir == true && flagFPI_sec == false) {
            Fraction result = first - numSecond;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_fir = false;
        }
        else if (flagFPI_sec == true && flagFPI_fir == false) {

            Fraction result = Fraction(numFirst, 1) - second;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_sec = false;
        }
        else if (flagFPI_sec == true && flagFPI_fir == true) {
            Fraction result = first - second;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_sec = false;
            flagFPI_fir = false;
        }
        else if (ui->label->text() != "") {
            double result = numFirst - numSecond;

            new_label = QString::number(result, 'g', 9);
            ui->label->setText(new_label);

            ui->label->setGeometry(10, 0, 531, 71);
            ui->pushButton_plus->setChecked(false);
        }
    }
    else if (ui->pushButton_mul->isChecked()) {
        if (flagFPI_fir == true && flagFPI_sec == false) {
            Fraction result = first * numSecond;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_fir = false;
        }
        else if (flagFPI_sec == true && flagFPI_fir == false) {

            Fraction result = Fraction(numFirst, 1) * second;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_sec = false;
        }
        else if (flagFPI_sec == true && flagFPI_fir == true) {
            Fraction result = first * second;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelZ->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelCH->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_sec = false;
            flagFPI_fir = false;
        }
        else if (ui->label->text() != "") {
            double result = numFirst * numSecond;

            new_label = QString::number(result, 'g', 9);
            ui->label->setText(new_label);

            ui->label->setGeometry(10, 0, 531, 71);
            ui->pushButton_plus->setChecked(false);
        }
    }
    else if (ui->pushButton_div->isChecked()) {
        if (flagFPI_fir == true && flagFPI_sec == false) {
            Fraction result = first / numSecond;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelCH->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelZ->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_fir = false;
        }
        else if (flagFPI_sec == true && flagFPI_fir == false) {

            Fraction result = Fraction(numFirst, 1) / second;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelCH->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelZ->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_sec = false;
        }
        else if (flagFPI_sec == true && flagFPI_fir == true) {
            Fraction result = first / second;

            new_label = QString::number(result.getDiv(), 'g', 6);
            ui->labelCH->setText(new_label);

            new_label = QString::number(result.getNum(), 'g', 6);
            ui->labelZ->setText(new_label);

            ui->label->setGeometry(10, 0, 451, 71);
            ui->pushButton_plus->setChecked(false);
            ui->label->setText("");
            flagFPI_sec = false;
            flagFPI_fir = false;
        }
        else if (ui->label->text() != "") {
            double result = numFirst / numSecond;

            new_label = QString::number(result, 'g', 9);
            ui->label->setText(new_label);

            ui->label->setGeometry(10, 0, 531, 71);
            ui->pushButton_plus->setChecked(false);
        }
    }

    // Если нам нужно выводить только вещ. числа
    changeOutput();
}

void MainWindow::changeOutput() {
    QString new_label;
    if (flagOutputReal == true && ui->label->text() != "") {
        ui->label->setGeometry(10, 0, 531, 71);
        double f = ui->labelCH->text().toDouble();
        double s = ui->labelZ->text().toDouble();
        double n = ui->label->text().toDouble();

        if (n < 0) {
            n *= -1; // -5 => 5;
            f += n * s;
            f *= -1;
        }
        else f += n * s;

        f /= s;

        new_label = QString::number(f, 'g', 9);
        ui->label->setText(new_label);
    }
    else if (flagOutputReal == true) {
        ui->label->setGeometry(10, 0, 531, 71);
        double f = ui->labelCH->text().toDouble();
        double s = ui->labelZ->text().toDouble();

        f /= s;

        new_label = QString::number(f, 'g', 9);
        ui->label->setText(new_label);
    }
}

void MainWindow::on_action_Info_triggered() {
    Dialog window;
    window.setModal(true);
    window.exec();
}

// Смена отображения вывода результата
void MainWindow::on_action_ChangeOutput_triggered() {
    if (flagOutputReal == false) flagOutputReal = true;
    else flagOutputReal = false;
}
