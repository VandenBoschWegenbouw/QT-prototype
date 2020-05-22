#include "User.h"

QString User::getName()
{
	return name;
}

User::User(QString name)
{
	this->name = name;
}

User::User(int id, QString name)
{
	this->id = id;
	this->name = name;
}
