#include "dialog.h"
#include "ui_dialog.h"

bool Dialog::ReadFile() {
    QDomDocument doc;

    QFile file(Filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    doc.setContent(&file);
    file.close();

    QDomElement xmlroot = doc.firstChildElement();

    QDomNodeList h1 = xmlroot.elementsByTagName("j1");
    for (int i = 0; i < h1.count(); i++) {
        QDomElement ch1 = h1.at(i).toElement();
        QStandardItem *ch1Item = new QStandardItem(ch1.attribute("name"));

        QDomNodeList h2 = ch1.elementsByTagName("j2");
        for (int j = 0; j < h2.count(); j++) {
            QDomElement ch2 = h2.at(j).toElement();
            QStandardItem *ch2Item = new QStandardItem(ch2.attribute("name"));

            QDomNodeList h3 = ch2.elementsByTagName("j3");
            for (int h = 0; h < h3.count(); h++) {
                QDomElement ch3 = h3.at(h).toElement();
                QStandardItem *ch3Item = new QStandardItem(ch3.attribute("name"));
                ch2Item->appendRow(ch3Item);
            }
            ch1Item->appendRow(ch2Item);
        }
        model->appendRow(ch1Item);
    }
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        ui->gridLayout->addWidget(view);
        view->setHtml(file.readAll().constData());
        view->show();
        file.close();
    }
    return true;
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    Filename = "./books.html";
    model = new QStandardItemModel(0,1,this);
    view = new QWebEngineView(parent);

    if (!ReadFile()) QMessageBox::critical(this, "Ошибка", "Не удалось открыть файл со справочным материалом!", QMessageBox::Ok);

    ui->treeView->setModel(model);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_treeView_clicked() {

    QDomDocument doc;
    QString ofile = "file:///books.html";

    QFile file(Filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "error";
    }
    doc.setContent(&file);
    file.close();

    QStandardItem *item = model->itemFromIndex(ui->treeView->currentIndex());
    QString str = item->text();

//    qDebug() << "index name: " << str;

    QDomElement xmlroot = doc.firstChildElement();

    QDomNodeList j1 = xmlroot.elementsByTagName("j1");
    QDomNodeList j2 = xmlroot.elementsByTagName("j2");
    QDomNodeList j3 = xmlroot.elementsByTagName("j3");

    for (int i = 0; i < j1.count(); i++) {
        QDomElement cj1 = j1.at(i).toElement();
        QStandardItem *j1Item = new QStandardItem(cj1.attribute("href"));
        QStandardItem *j1Name = new QStandardItem(cj1.attribute("name"));

        for (int j = 0; j < j2.count(); j++) {
            QDomElement cj2 = j2.at(j).toElement();
            QStandardItem *j2Item = new QStandardItem(cj2.attribute("href"));
            QStandardItem *j2Name = new QStandardItem(cj2.attribute("name"));

            for (int h = 0; h < j3.count(); h++) {
                QDomElement cj3 = j3.at(h).toElement();
                QStandardItem *j3Item = new QStandardItem(cj3.attribute("href"));
                QStandardItem *j3Name = new QStandardItem(cj3.attribute("name"));

                if (j3Name->text() == str) view->load(QUrl(ofile + j3Item->text()));
//                qDebug() << "j3 href:" << j3Item->text();
//                qDebug() << "j3 name:" << j3Name->text();
            }
            if (j2Name->text() == str) view->load(QUrl(ofile + j2Item->text()));
//                qDebug() << "j2 href:" << j2Item->text();
//                qDebug() << "j2 name:" << j2Name->text();
        }
        if (j1Name->text() == str) view->load(QUrl(ofile + j1Item->text()));
//        qDebug() << "j1 href:" << j1Item->text();
//        qDebug() << "j1 name:" << j1Name->text();
    }

//    qDebug() << "P:" << index.row();
//    qDebug() << "H:" << index.parent().row();
}
