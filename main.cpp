#include <QtGui/QApplication>
#include "tuxlolgyclock.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TuxlolgyClock w;
    w.show();

    return a.exec();
}
