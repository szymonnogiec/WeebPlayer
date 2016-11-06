#ifndef WEEBPLAYER_H
#define WEEBPLAYER_H

#include <QtWidgets/QMainWindow>
#include "ui_weebplayer.h"

class WeebPlayer : public QMainWindow
{
	Q_OBJECT

public:
	WeebPlayer(QWidget *parent = 0);
	~WeebPlayer();

private:
	Ui::WeebPlayerClass ui;
};

#endif // WEEBPLAYER_H
