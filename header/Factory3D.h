#ifndef FACTORY3D_H
#define FACTORY3D_H
#include "PolygonFactory.h"
#include "Rectangle3D.h"
#include "Circle3D.h"
class Factory3D: public PolygonFactory{
public:
    Polygon* createRectangle(){
        return new Rectangle3D;
    }
    Polygon* createCircle(){
        return new Circle3D;
    }
};
#endif