#include "helpwindow.h"
#include "ui_helpwindow.h"

HelpWindow::HelpWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpWindow)
{
    ui->setupUi(this);
    view = new QWebEngineView(parent);
}

HelpWindow::~HelpWindow()
{
    delete ui;
}
