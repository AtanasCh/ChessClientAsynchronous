#include <QApplication>
#include "gui/connectwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    ConnectWindow cw;
    cw.show();
    return app.exec();
}
