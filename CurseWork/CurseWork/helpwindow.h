#ifndef HELPWINDOW_H
#define HELPWINDOW_H

#include <QDialog>
#include <QtWebEngineWidgets>

namespace Ui {
class HelpWindow;
}

class HelpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HelpWindow(QWidget *parent = nullptr);
    ~HelpWindow();

private:
    Ui::HelpWindow *ui;
    QWebEngineView *view;
};

#endif // HELPWINDOW_H
