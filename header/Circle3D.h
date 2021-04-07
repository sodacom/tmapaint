#ifndef CIRCLE3D_H
#define CIRCLE3D_H
#include <vector>
#include "Polygon.h"

class Circle3D: public Polygon{
private:
    int r;
    int z;
public:
    void setPoint();
    void setDimension();
    std::vector<int> getAttribute();
    void setAttribute(std::vector<int> attribute);
    void show();
};
#endif