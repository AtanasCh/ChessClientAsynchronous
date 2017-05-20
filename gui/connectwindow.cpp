#include "connectwindow.h"
#include "ui_connectwindow.h"

#include <QSignalMapper>


extern QString ConnectWindow::ipAddress;
extern QString ConnectWindow::portNumb;
extern QString ConnectWindow::playerName;

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


void ConnectWindow::quitOnX()
{
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
    out.flush();
}

//When clicking Exit
void ConnectWindow::on_exitButton_clicked()
{
    QCoreApplication::quit();
}
