#ifndef HELPWINDOW_H
#define HELPWINDOW_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QtXml>
#include <QDebug>
#include <QWidget>
#include <QXmlStreamReader>
#include <QTreeWidgetItem>
#include <QStack>
#include <QStringList>
#include <QStringView>
#include <QFile>
#include <QDomDocument>
#include <QStandardItem>

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
    QString Filename;
    QStandardItemModel *model;

    void ReadFile();
    void ClickTree();
};

#endif // HELPWINDOW_H
