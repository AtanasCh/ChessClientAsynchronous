#ifndef CONNECTWINDOW_H
#define CONNECTWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QPushButton>
#include <QLineEdit>
#include <QTextStream>
#include <QDataStream>
#include <QNetworkSession>
#include <string>
#include <exception>

namespace Ui {
class ConnectWindow;
}

class ConnectWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ConnectWindow(QWidget *parent = 0);
    ~ConnectWindow();

    static QString getIpAddress();
    static QString getPortNumb();
    static QString getPlayerName();


private slots:
    void quitOnX();
    void on_connectButton_clicked();
    void on_sendButton_clicked(); //Do not forget
    void on_exitButton_clicked();


private:
    Ui::ConnectWindow* ui;

    static QString ipAddress;
    static QString portNumb;
    static QString playerName;
    QTcpSocket *tSock;
    QDataStream in;
    QNetworkSession *netSesh;

};

#endif // CONNECTWINDOW_H
