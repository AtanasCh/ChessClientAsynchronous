#include "connectwindow.h"
#include "ui_connectwindow.h"

#include <QSignalMapper>


ConnectWindow::ConnectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConnectWindow)
{
    ui->setupUi(this);
}

ConnectWindow::~ConnectWindow()
{
    delete ui;
}
