#pragma once
#include <QtCore\qstring.h>
class User
{
private:
	int id;
	QString name = "test";
public:
	QString getName();
	User(QString name);
	User(int id, QString name);
};

