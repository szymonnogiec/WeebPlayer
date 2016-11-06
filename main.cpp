#include "weebplayer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	WeebPlayer w;
	w.show();
	return a.exec();
}
