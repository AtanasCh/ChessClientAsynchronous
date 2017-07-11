#ifndef DATABASE_H
#define DATABASE_H


#include <QString>
#include <QVector>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QBuffer>
#include <QUuid>

#include <QDebug>

#include <gui/gameoptionswindow.h>

class Database
{
private:
    QString dbName = QString("chess");
    QString playerName;
    QString player1;
    QString player2;
    QString  won = QString("Player1"); // just for testing
    QString fff;
    QSqlDatabase db;



public:
    Database();  // Constructor
    ~Database(); // Destructor

    void insertNamesWin();
    QString getPlayerStats(QString playerName);
    GameOptionsWindow GameOptionsWindow;

    // void getPlayerStats();

};

#endif // DATABASE_H
