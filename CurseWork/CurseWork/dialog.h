#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtWebEngineWidgets>
#include <QFile>
#include <QDomDocument>
#include <QStandardItem>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_treeView_clicked();

private:
    Ui::Dialog *ui;
    QWebEngineView *view;
    QString Filename;
    QStandardItemModel *model;

    bool ReadFile();
};

#endif // DIALOG_H
