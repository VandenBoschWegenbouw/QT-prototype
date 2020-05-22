#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtPrototype.h"

class QtPrototype : public QMainWindow
{
	Q_OBJECT

public:
	QtPrototype(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtPrototypeClass ui;
};
