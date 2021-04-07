#ifndef POLYGON_H
#define POLYGON_H
#include <vector>
class Polygon{
protected:
    int x,y;
public:
    virtual void setPoint()=0;
    virtual void setDimension()=0;
    virtual std::vector<int> getAttribute()=0;
    virtual void setAttribute(std::vector<int> attribute)=0;
    virtual void show()=0;
};
#endif