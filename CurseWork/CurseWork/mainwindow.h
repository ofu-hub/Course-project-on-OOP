#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:

    void on_pushButton_dot_clicked();
    void on_pushButton_AC_clicked();
    void on_pushButton_C_clicked();
    void on_pushButton_chC_clicked();
    void on_pushButton_zC_clicked();
    void on_pushButton_dotZ_clicked();
    void on_pushButton_dotCH_clicked();
    void on_action_AC_triggered();
    void on_action_Exit_triggered();
    void on_action_Author_triggered();
    void on_pushButton_equally_clicked();
    void on_action_Info_triggered();
    void on_action_ChangeOutput_triggered();

    void changeOutput(); //
    void z_numbers(); //
    void ch_numbers(); //
    void operations(); //
    void math_operations(); //
    void digits_numbers(); //
};
#endif // MAINWINDOW_H
