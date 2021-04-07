#ifndef POLYGONFACTORY_H
#define POLYGONFACTORY_H
#include "Polygon.h"
class PolygonFactory{
public:
    virtual Polygon* createRectangle()=0;
    virtual Polygon* createCircle()=0;
};

#endif