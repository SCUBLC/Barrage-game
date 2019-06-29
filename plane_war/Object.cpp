#include "Object.h"

Object::Object(const QPoint& Pos, const qreal& Speed, const QString& PixPath,
	QGraphicsScene *scene, QGraphicsItem *parent): 
	pos(Pos), speed(Speed), pixMap(PixPath)
{
	;
}

Object::~Object()
{
	;
}