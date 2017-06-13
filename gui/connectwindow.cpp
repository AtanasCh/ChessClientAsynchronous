#include "connectwindow.h"
#include "ui_connectwindow.h"

#include <QSignalMapper>
#include <iostream> // TODO remove , debugging purposes


extern QString ConnectWindow::ipAddress;
extern QString ConnectWindow::portNumb;
extern QString ConnectWindow::playerName;
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

QString ConnectWindow::getPlayerName()
{
    return playerName;
}
//

//When clicking Connect
void ConnectWindow::on_connectButton_clicked()
{
    //Instead of printing, use sockets to connect.
    ipAddress = ui->ipField->text();
    portNumb = ui->portField->text();
    playerName = ui->nameField->text();

    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out << playerName;

    tSock->connectToHost(ipAddress, portNumb.toInt());
    tSock->waitForConnected();
    tSock->write(block);
    tSock->flush();
}

void ConnectWindow::on_sendButton_clicked()
{  
    std::cout << "send "; // TODO delete
    tSock ->disconnectFromHost();
    statusBar()->clearMessage();
}

// When clicking Exit
void ConnectWindow::on_exitButton_clicked()
{
    std::cout << "exit"; // TODO delete
    tSock ->abort();
    QCoreApplication::quit();
}
