#include "gameWindow.h"
#include <qgraphicsview.h>
gameWindow::gameWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	myCtrl = new contrallor();
	myView = new QGraphicsView();
	myView->setBackgroundBrush(QBrush(QPixmap("tempTest")));
	myView->show();
	myView->setWindowTitle(QObject::tr("WAR OF PLANES"));
	myView->setScene(myCtrl);
}

gameWindow::~gameWindow()
{

}


