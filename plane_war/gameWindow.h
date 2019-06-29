#pragma once

#include <QWidget>
#include "ui_gameWindow.h"
#include "contrallor.h"
class gameWindow : public QWidget
{
	Q_OBJECT

public:
	gameWindow(QWidget *parent = Q_NULLPTR);
	~gameWindow();

private:
	Ui::gameWindow ui;
	QGraphicsView *myView;	//游戏场景
	contrallor *myCtrl;		//控制类，继承自QGraphicScene
signals:
	
};
