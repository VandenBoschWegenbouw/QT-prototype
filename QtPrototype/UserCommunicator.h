#pragma once
#include "User.h"
#include <vector>
#include <QSqlQueryModel>
#include <QSqlQuery>
class UserCommunicator
{
public:
	void create(User entity);
	User readById(int id);
	std::vector<User> readAll();
	User update(User entity);
	void deleteByType(User entity);
	void deleteById(int id);
};

