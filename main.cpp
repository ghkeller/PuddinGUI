#include "tabwindowtest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Puddin w;
    w.show();

    return a.exec();
}
