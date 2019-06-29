#include "Plane.h"



Plane::Plane(const QPoint& Pos, const qreal& Speed, const QString& pixPath,
	QGraphicsScene *Scene, const qreal& Blood, QGraphicsItem *Parent):
	Object(Pos, Speed, pixPath,Scene, Parent), blood(Blood)
{
	;
}


Plane::~Plane()
{
}


QRectF Plane::boundingRect() const
{
	return pixMap.rect();
}