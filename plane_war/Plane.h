#pragma once
#include "Object.h"

class Plane : public Object
{
	Q_OBJECT
public:
	Plane(const QPoint& Pos, const qreal& Speed, const QString& pixPath,
		QGraphicsScene *Scene, const qreal& Blood, QGraphicsItem *Parent = 0);
	virtual ~Plane();

protected:
	virtual QRectF boundingRect() const;	//��ײ��⺯��
	virtual void openFire() = 0;	//����
	qreal blood;			//Ѫ��
private:
		
};

class myPlane : public Plane
{
public:
	myPlane(const QPoint& Pos, const qreal& Speed, const QString& pixPath,
		QGraphicsScene *scene, const qreal& blood, QGraphicsItem *parent = 0);
	void setScore(const qint64& Score);	//���÷���
	void setBlood(const qreal& blood);	//����Ѫ��

private:
	qint64 score;	//��������ʼ��Ϊ0
	bool key_W, key_S, key_A, key_D;		//�жϷ���

};

class enemyPlane : public Plane
{

};

