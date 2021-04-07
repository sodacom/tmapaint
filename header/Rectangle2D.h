#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H
#include <vector>
#include "Polygon.h"

class Rectangle2D: public Polygon{
private:
    int w,h;
public:
    void setPoint();
    void setDimension();
    std::vector<int> getAttribute();
    void setAttribute(std::vector<int> attribute);
    void show();
};
#endif