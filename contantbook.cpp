#include "contantbook.h"
#include "ui_contantbook.h"

#include <QFile>
#include <QDebug>
#include <QFileDialog>

QString mFilename;

void Write(QString Filename, QString str)
{
    QFile mfile(Filename);
    if(!mfile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "could not open file for write";
        return;
    }
    QTextStream out(&mfile);
    out << str;
    mfile.flush();
    mfile.close();
}

void Read(QString Filename, QString &str)
{
    QFile mfile(Filename);
    if(!mfile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "could not open file for read";
        return;
    }
    QTextStream in(&mfile);

    in >> str;
    while(!in.atEnd())
    {
        QString input;
        in >> input;
        str += '\n' + input;
    }

    mfile.flush();
    mfile.close();
}

ContantBook::ContantBook(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ContantBook)
{
    ui->setupUi(this);
    QStringList ColTotle;
    ui->tableWidget->setColumnCount(4);
    ColTotle<<QStringLiteral("學號")<<QStringLiteral("班級")<<QStringLiteral("姓名")<<QStringLiteral("電話");
    ui->tableWidget->setHorizontalHeaderLabels(ColTotle);
}

ContantBook::~ContantBook()
{
    delete ui;
}

void ContantBook::on_pushButton_clicked()
{
    QTableWidgetItem *inputRow1, *inputRow2, *inputRow3, *inputRow4;

    inputRow1 = new QTableWidgetItem(ui->lineEdit->text());
    inputRow2 = new QTableWidgetItem(ui->lineEdit_2->text());
    inputRow3 = new QTableWidgetItem(ui->lineEdit_3->text());
    inputRow4 = new QTableWidgetItem(ui->lineEdit_4->text());

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());

    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,inputRow1);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,inputRow2);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,inputRow3);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,inputRow4);
}


void ContantBook::on_pushButton_2_clicked()
{
    QString saveFile="";
    int rc, cc;
    rc = ui->tableWidget->rowCount();
    cc = ui->tableWidget->columnCount();
    mFilename = QFileDialog::getSaveFileName(this,
                                             QStringLiteral("匯出檔案"),
                                             tr("."),
                                             QStringLiteral("任何檔案(*.*)"
                                                ";;文字檔(*.txt)"));
    if(!mFilename.isEmpty())
    {
        for(int i=0; i<rc; i++)
        {
            for(int j=0; j<cc; j++)
                saveFile += ui->tableWidget->item(i, j)->text() + ",";
            saveFile += "\n";
        }

        Write(mFilename, saveFile);
    }
}


void ContantBook::on_pushButton_4_clicked()
{
    on_pushButton_2_clicked();
    close();
}


void ContantBook::on_pushButton_3_clicked()
{
    QString readFile = "";
    mFilename = QFileDialog::getOpenFileName(this,
                                             QStringLiteral("匯入檔案"),
                                             tr("."),
                                             QStringLiteral("任何檔案(*.*)"
                                                ";;文字檔(*.txt)"));
    Read(mFilename, readFile);
    qDebug() << readFile;

    QStringList rl = readFile.split('\n');
    int rc = ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(rc + rl.size());

    for(int i=0; i<rl.size(); i++)
    {
        qDebug() << rl.at(i);
        QStringList cl = rl.at(i).split(",");

        for(int j=0; j<cl.size(); j++)
        {
            QTableWidgetItem *item = new QTableWidgetItem(cl.at(j));
            qDebug() << cl.at(j);
            ui->tableWidget->setItem(rc + i, j, item);
        }
    }
}

