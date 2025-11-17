#ifndef CONTANTBOOK_H
#define CONTANTBOOK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class ContantBook;
}
QT_END_NAMESPACE

class ContantBook : public QMainWindow
{
    Q_OBJECT

public:
    ContantBook(QWidget *parent = nullptr);
    ~ContantBook();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ContantBook *ui;
};
#endif // CONTANTBOOK_H
