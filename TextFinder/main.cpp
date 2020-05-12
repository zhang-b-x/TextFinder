#include "stdafx.h"
#include "textfinder.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TextFinder w;
	w.show();


	return a.exec();
}
