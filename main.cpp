#include <QApplication>
#include "gui/connectwindow.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ConnectWindow cw;
    cw.show();

    // shows offline game menu
    //MainWindow w;
    //w.show();

    return app.exec();
}
