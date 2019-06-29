#include "mainWindow.h"
#include<qmessagebox.h>
mainWindow::mainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(this->ui.btn_begin, SIGNAL(clicked()), this, SLOT(clicked_btn_begin()));
	connect(this->ui.btn_quit, SIGNAL(clicked()), this, SLOT(clicked_btn_quit()));
	connect(this->ui.btn_set, SIGNAL(clicked()), this, SLOT(clicked_btn_set()));
	connect(this->ui.btn_about, SIGNAL(clicked()), this, SLOT(clicked_btn_about()));
}


void mainWindow::clicked_btn_begin()
{
	this->hide();
	myGameWindow = new gameWindow();
	myGameWindow->show();
}

void mainWindow::clicked_btn_quit()
{
	if (QMessageBox::question(NULL, "emmmmm", "Do you really want to quit?",		//若确定退出
		QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) == QMessageBox::Yes)
	{
		this->close();
	}
}


void mainWindow::clicked_btn_set()
{
	//待实现
}

void mainWindow::clicked_btn_about()
{
	//待实现
}
