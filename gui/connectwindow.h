#ifndef CONNECTWINDOW_H
#define CONNECTWINDOW_H

#include <QMainWindow>

namespace Ui {
class ConnectWindow;
}

class ConnectWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit ConnectWindow(QWidget *parent = 0);
    ~ConnectWindow();

private:

    Ui::ConnectWindow* ui;

    void initUi();
};

#endif // CONNECTWINDOW_H
