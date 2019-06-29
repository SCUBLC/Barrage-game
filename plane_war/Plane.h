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
	virtual QRectF boundingRect() const;	//碰撞检测函数
	virtual void openFire() = 0;	//开火
	qreal blood;			//血量
private:
		
};

class myPlane : public Plane
{
public:
	myPlane(const QPoint& Pos, const qreal& Speed, const QString& pixPath,
		QGraphicsScene *scene, const qreal& blood, QGraphicsItem *parent = 0);
	void setScore(const qint64& Score);	//设置分数
	void setBlood(const qreal& blood);	//设置血量

private:
	qint64 score;	//分数，初始化为0
	bool key_W, key_S, key_A, key_D;		//判断方向

};

class enemyPlane : public Plane
{

};

