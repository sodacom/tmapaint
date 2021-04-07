#ifndef CIRCLE2D_H
#define CIRCLE2D_H
#include <vector>
#include "Polygon.h"
class Circle2D: public Polygon{
private:
    int r;
public:
    void setPoint();
    void setDimension();
    std::vector<int> getAttribute();
    void setAttribute(std::vector<int> attribute);
    void show();
};
#endif