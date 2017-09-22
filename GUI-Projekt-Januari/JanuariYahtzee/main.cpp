#include "yahtzeemainwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    YahtzeeMainWin w;
    w.show();

    srand(time(NULL));

    return a.exec();
}
