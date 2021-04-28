#include "helpwindow.h"
#include "ui_helpwindow.h"

void HelpWindow::ReadFile() {
    QDomDocument doc;

    QFile file(Filename);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        doc.setContent(&file);
        file.close();
    }

    //ui->textBrowser->setSource(QUrl::fromLocalFile("./books.html"), QTextDocument::ResourceType::HtmlResource);

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
}

void HelpWindow::ClickTree() {

}

HelpWindow::HelpWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpWindow)
{
    ui->setupUi(this);

    Filename = "books.html";
    model = new QStandardItemModel(0,1,this);

    ReadFile();

    ui->treeView->setModel(model);
}

HelpWindow::~HelpWindow()
{
    delete ui;
}
