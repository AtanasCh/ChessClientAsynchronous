#include <QApplication>
#include "gui/connectwindow.h"
#include "gui/localoronline.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

//    ConnectWindow cw;
//    cw.show();

//    // shows offline game menu
//    MainWindow w;
//    w.show();

    LocalOrOnline l;
    l.show();

    return app.exec();
}
