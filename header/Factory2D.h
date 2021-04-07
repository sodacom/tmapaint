#ifndef FACTORY2D_H
#define FACTORY2D_H
#include "PolygonFactory.h"
#include "Rectangle2D.h"
#include "Circle2D.h"
class Factory2D: public PolygonFactory{
public:
    Polygon* createRectangle(){
        return new Rectangle2D;
    }
    Polygon* createCircle(){
        return new Circle2D;
    }
};
#endif