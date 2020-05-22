#pragma once
#include <QSqlDatabase>
class MysqlConnector
{
public:
	QSqlDatabase getDatabase();

private:
	QSqlDatabase database;
};

