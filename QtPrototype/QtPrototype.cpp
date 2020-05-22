#include "QtPrototype.h"
#include "UserCommunicator.h"
#include <QMessageBox>


QtPrototype::QtPrototype(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	UserCommunicator comm;



	QMessageBox msgBox;
	User u = comm.readById(1);
	msgBox.setText(u.getName());
	msgBox.exec();
}
