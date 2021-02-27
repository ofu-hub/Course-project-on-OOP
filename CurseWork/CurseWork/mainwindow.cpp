#include "mainwindow.h"
#include "ui_mainwindow.h"

double numFirst;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // digit number
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

    // z number
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

    // operators
    connect(ui->pushButton_precent, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_plus_minus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_mul, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->pushButton_div, SIGNAL(clicked()), this, SLOT(math_operations()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_mul->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers() {
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    all_numbers = (ui->label->text() + button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 10);

    ui->label->setText(new_label);
}

void MainWindow::z_numbers() {

}

void MainWindow::on_pushButton_dot_clicked()
{
    if(!(ui->label->text().contains('.')))
        ui->label->setText(ui->label->text() + ".");
}

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

void MainWindow::math_operations() {
    QPushButton *button = (QPushButton *)sender();

    numFirst = ui->label->text().toDouble();
    ui->label->setText("");
    button->setChecked(true);
}

void MainWindow::on_pushButton_equally_clicked()
{
    double lNum, numSecond;
    QString new_label;

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
}

void MainWindow::on_pushButton_AC_clicked()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_mul->setChecked(false);
    ui->pushButton_div->setChecked(false);

    ui->label->setText("0");
}

void MainWindow::on_pushButton_C_clicked()
{
    QString text = ui->label->text();
    text.chop(1);
    if (text.isEmpty()) text = "0";
    ui->label->setText(text);
}
