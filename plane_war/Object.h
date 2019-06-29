#pragma once

#include <QGraphicsObject>
#include <QPoint.h>
#include <QString.h>
#include <qpixmap.h>

class Object :  public QGraphicsObject		//物体抽象基类，继承于QGraphicsObject
{
	Q_OBJECT
public:
	Object(const QPoint& Pos, const qreal& Speed, const QString& pixPath, 
		QGraphicsScene *scene, QGraphicsItem *parent = 0);	//注：pixPath为所加载图片路径，scene为该物体所在场景
	virtual ~Object();

	void move();	//移动
	bool isDisappear();		//是否离开场景

protected:
	QPoint pos;
	qreal speed, width, heigt;	//位置，速度，大小
	QPixmap pixMap;						//所加载图片

};

