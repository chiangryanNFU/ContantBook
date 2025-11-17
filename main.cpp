#include "contantbook.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ContantBook w;
    w.show();
    return a.exec();
}
