#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainWindow.h"
#include "gameWindow.h"

typedef enum { Easy, Medium, Hard, Hell }  difficulty;	//游戏难度
typedef enum { SingleMode, DoubleMode } mode;			//游戏模式


class mainWindow : public QMainWindow
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::mainWindowClass ui;
	gameWindow* myGameWindow;		//游戏窗口控件
	int gameMode;					//游戏模式，初始化为Single模式
	int difficultyDegree;			//游戏难度，初始化为Medium模式

private slots:
	void clicked_btn_begin();		//槽函数，btn_begin点击
	void clicked_btn_quit();		//槽函数，btn_quit点击
	void clicked_btn_set();			//槽函数，btn_set点击
	void clicked_btn_about();		//槽函数，btn_aboout点击
	
};

