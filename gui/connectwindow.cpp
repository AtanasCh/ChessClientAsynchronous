#include "connectwindow.h"
#include "ui_connectwindow.h"
#include "lobby.h"
#include "ui_lobby.h"
#include "mainwindow.h"

#include <QSignalMapper>
#include <iostream> // TODO remove , debugging purposes


extern QString ConnectWindow::ipAddress;
extern QString ConnectWindow::portNumb;
extern QDataStream in;
extern QTcpSocket *tSock;
QString nextFortune;

ConnectWindow::ConnectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConnectWindow), tSock(new QTcpSocket(this))
{
    ui->setupUi(this);
}

ConnectWindow::~ConnectWindow()
{
    delete ui;
}


void ConnectWindow::quitOnX()
{
    tSock->disconnect();
    QCoreApplication::quit();
}

//Getters
QString ConnectWindow::getIpAddress()
{
    return ipAddress;
}

QString ConnectWindow::getPortNumb()
{
    return portNumb;
}
//

//When clicking Connect
void ConnectWindow::on_connectButton_clicked()
{
    //Instead of printing, use sockets to connect.
    ipAddress = ui->ipField->text();
    portNumb = ui->portField->text();

    QByteArray block;

    tSock->connectToHost(ipAddress, portNumb.toInt());
    tSock->waitForConnected();

    MainWindow *mw = new MainWindow;
    mw -> show();
    tSock->flush();
}

// When clicking Exit
void ConnectWindow::on_exitButton_clicked()
{
    std::cout << "exit"; // TODO delete
    tSock ->abort();
    QCoreApplication::quit();
}
