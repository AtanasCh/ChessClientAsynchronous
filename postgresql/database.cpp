#include "database.h"

Database::Database()
{
    // database setup
    this->db = QSqlDatabase::addDatabase( "QPSQL" );
    this->db.setHostName("localhost");
    this->db.setDatabaseName(dbName);
    this->db.setUserName("postgres");
    this->db.setPassword("123456");
    this->db.setPort(5432);
    //
    this->db.open(); // open the database
    QSqlQuery query = QSqlQuery( this->db ); // create a new query to run upon the database
    query.prepare( "CREATE TABLE IF NOT EXISTS wins.chessgames (player1 CHAR(20), player2 CHAR(20), playerwon CHAR(20) ");
    query.exec();
}

Database::~Database() {

  //qDebug() << "Called Destructor!";
    QString connection = this->db.connectionName();
    this->db.close(); // close the database
    this->db = QSqlDatabase();
    this->db.removeDatabase(connection);

}

void Database::insertNamesWin(){
    // get player name values
    player1 = GameOptionsWindow.getFirstPlayerName();
    player2 = GameOptionsWindow.getSecondPlayerName();

    QSqlQuery query = QSqlQuery( this->db );
    query.prepare( "INSERT INTO wins.chessgames (player1, player2, , playerwon) VALUES (:p1, :p2, :won, :)" );
    query.bindValue( ":p1", player1 ); // bind player1 value
    query.bindValue( ":p2", player2 ); // bind player2 value
    query.bindValue( ":won", won ); // bind winner value
    query.exec();
}

QString Database::getPlayerStats(QString playerName){

 // enter player's name
    QString stats;
    QSqlQuery query = QSqlQuery( this->db );
    query.bindValue( ":player", playerName);
    query.prepare( "SELECT player1, player2 FROM wins.chessgames WHERE player1 = :player OR player2 = :player");
    if (!query.exec()){
        qDebug() << "Error exetucing prepared query." << query.lastError();
    }
    else
    {
        while(query.next())
        {
           // QString fff = query.value(0).toString();
        }

    }

    stats = fff;

    return stats;
}
