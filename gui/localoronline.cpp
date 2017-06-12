#include "localoronline.h"
#include "ui_localoronline.h"
#include "mainwindow.h"
#include "connectwindow.h"

LocalOrOnline::LocalOrOnline(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LocalOrOnline)
{
    ui->setupUi(this);
}

LocalOrOnline::~LocalOrOnline()
{
    delete ui;
}

void LocalOrOnline::on_OnlineButton_clicked()
{
    ConnectWindow *cw = new ConnectWindow;
    cw->show();
}

void LocalOrOnline::on_LocalButton_clicked()
{
    MainWindow *mw = new MainWindow;
    mw -> show();
}
