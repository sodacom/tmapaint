#ifndef RECTANGLE3D_H
#define RECTANGLE3D_H
#include <vector>
#include "Polygon.h"

class Rectangle3D: public Polygon{
private:
    int z;
    int w,h;
public:
    void setPoint();
    void setDimension();
    std::vector<int> getAttribute();
    void setAttribute(std::vector<int> attribute);
    void show();
};
#endif
