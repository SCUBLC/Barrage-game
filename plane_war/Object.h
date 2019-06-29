#pragma once

#include <QGraphicsObject>
#include <QPoint.h>
#include <QString.h>
#include <qpixmap.h>

class Object :  public QGraphicsObject		//���������࣬�̳���QGraphicsObject
{
	Q_OBJECT
public:
	Object(const QPoint& Pos, const qreal& Speed, const QString& pixPath, 
		QGraphicsScene *scene, QGraphicsItem *parent = 0);	//ע��pixPathΪ������ͼƬ·����sceneΪ���������ڳ���
	virtual ~Object();

	void move();	//�ƶ�
	bool isDisappear();		//�Ƿ��뿪����

protected:
	QPoint pos;
	qreal speed, width, heigt;	//λ�ã��ٶȣ���С
	QPixmap pixMap;						//������ͼƬ

};

