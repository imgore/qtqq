#include "mainwindow.h"
#include "logonwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //    MainWindow w;
    //    w.show();

    LogonWindow logon;
    logon.show();

    return a.exec();
}
