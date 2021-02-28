#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum Operations {
    None = -1,
    Plus = 0,
    Minus = 1,
    Div = 2,
    Mul = 3
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void math_operations();
    void on_pushButton_equally_clicked();
    void on_pushButton_AC_clicked();
    void on_pushButton_C_clicked();
    void z_numbers();
};
#endif // MAINWINDOW_H
