#include "connectwindow.h"
#include "ui_connectwindow.h"

#include <QSignalMapper>


extern QString ConnectWindow::ipAddress;
extern QString ConnectWindow::portNumb;
extern QString ConnectWindow::playerName;
extern QDataStream in;
extern QTcpSocket *tSock;
QString nextFortune;

ConnectWindow::ConnectWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConnectWindow), tSock(new QTcpSocket(this)), netSesh(Q_NULLPTR)
{
    in.setDevice(tSock);
    in.setVersion(QDataStream::Qt_4_0);
    ui->setupUi(this);
}

ConnectWindow::~ConnectWindow()
{
    delete ui;
}


void ConnectWindow::quitOnX()
{
    tSock ->disconnect();
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
    QString ipAddress = ui->ipField->text();
    QString portNumb = ui->portField->text();
    QString playerName = ui->nameField->text();
    QTextStream out(stdout);
    out << ipAddress << endl;
    out << portNumb << endl;
    out << playerName << endl;


    tSock ->connectToHost(ipAddress, portNumb.toShort());
    in.setDevice(tSock);
    in.setVersion(QDataStream::Qt_4_0);

        out << tSock->state() <<endl;

        in.startTransaction();
        in >> nextFortune;
        out << nextFortune << endl;

        tSock ->disconnect();

    out.flush();

}

void ConnectWindow::on_sendButton_clicked()
{
    int a = 1;
}

//When clicking Exit
void ConnectWindow::on_exitButton_clicked()
{
    tSock ->disconnect();
    QCoreApplication::quit();
}
