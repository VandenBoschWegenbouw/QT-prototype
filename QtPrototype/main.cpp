#include "QtPrototype.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtPrototype w;
	w.show();
	return a.exec();
}
