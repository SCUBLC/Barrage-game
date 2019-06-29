#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainWindow.h"
#include "gameWindow.h"

typedef enum { Easy, Medium, Hard, Hell }  difficulty;	//��Ϸ�Ѷ�
typedef enum { SingleMode, DoubleMode } mode;			//��Ϸģʽ


class mainWindow : public QMainWindow
{
	Q_OBJECT

public:
	mainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui::mainWindowClass ui;
	gameWindow* myGameWindow;		//��Ϸ���ڿؼ�
	int gameMode;					//��Ϸģʽ����ʼ��ΪSingleģʽ
	int difficultyDegree;			//��Ϸ�Ѷȣ���ʼ��ΪMediumģʽ

private slots:
	void clicked_btn_begin();		//�ۺ�����btn_begin���
	void clicked_btn_quit();		//�ۺ�����btn_quit���
	void clicked_btn_set();			//�ۺ�����btn_set���
	void clicked_btn_about();		//�ۺ�����btn_aboout���
	
};

