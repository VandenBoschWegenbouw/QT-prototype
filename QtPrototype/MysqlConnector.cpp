#include "MysqlConnector.h"

QSqlDatabase MysqlConnector::getDatabase()
{
	if (!database.isOpen())
	{
		database = QSqlDatabase::addDatabase("QMYSQL");
/*		database.setHostName("tcp://127.0.0.1");
		database.setDatabaseName("qtprototype");
		database.setUserName("root");
		database.setPassword("");
		database.setPort(3306);*/
		QString connStr = QStringLiteral("Driver={MySQL ODBC 8.0 Unicode Driver};Server=127.0.0.1;Port=3306;Database=qtprototype;Uid=root;Pwd=;");
		database.setDatabaseName(connStr);
		database.open();
	}
	return database;
}
