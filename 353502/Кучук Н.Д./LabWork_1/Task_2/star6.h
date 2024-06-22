#ifndef STAR6_H
#define STAR6_H
#include <QObject>
#include <QGraphicsItem>
#include "figure.h"

    class Star6 : public Figure
{
    Q_OBJECT

public:
    explicit Star6(QPointF point, QObject *parent = 0);
    ~Star6();

private:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // STAR6_H
