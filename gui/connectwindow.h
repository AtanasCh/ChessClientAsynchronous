#ifndef CONNECTWINDOW_H
#define CONNECTWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QTextStream>
#include <string>

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
    void on_exitButton_clicked();


private:
    Ui::ConnectWindow* ui;

    static QString ipAddress;
    static QString portNumb;
    static QString playerName;

};

#endif // CONNECTWINDOW_H
