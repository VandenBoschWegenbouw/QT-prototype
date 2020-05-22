#include "UserCommunicator.h"
#include "MysqlConnector.h"

#include "qdebug.h"
#include <QSqlError>
void UserCommunicator::create(User entity)
{
}

User UserCommunicator::readById(int id)
{
	QSqlDatabase db = MysqlConnector().getDatabase();

	if (!db.isOpen())
	{

		QSqlError err = db.lastError();
		qDebug() << err;

		db.open();
	}

	QSqlQuery query("SELECT * FROM `user` WHERE `user`.`idUser` = " + id);


	while (query.next()) {
		return User(query.value(0).toInt(), query.value(1).toString());
	}
}

std::vector<User> UserCommunicator::readAll()
{
	return std::vector<User>();
}

User UserCommunicator::update(User entity)
{
	return entity;
}

void UserCommunicator::deleteByType(User entity)
{
}

void UserCommunicator::deleteById(int id)
{
}
