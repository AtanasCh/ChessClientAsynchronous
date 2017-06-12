#ifndef LOCALORONLINE_H
#define LOCALORONLINE_H

#include <QDialog>

namespace Ui {
class LocalOrOnline;
}

class LocalOrOnline : public QDialog
{
    Q_OBJECT

public:
    explicit LocalOrOnline(QWidget *parent = 0);
    ~LocalOrOnline();

private slots:
    void on_OnlineButton_clicked();

    void on_LocalButton_clicked();

private:
    Ui::LocalOrOnline *ui;
};

#endif // LOCALORONLINE_H
