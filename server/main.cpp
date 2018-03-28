#include "matchmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MatchMainWindow w;
    w.show();

    return a.exec();
}
