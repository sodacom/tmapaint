#ifndef SYSTEM_H
#define SYSTEM_H
#include "PolygonFactory.h"
#include "Invoker.h"
#include "LinkedList.h"
#include "Factory2D.h"
#include "Factory3D.h"
class System{
private:
    PolygonFactory *factory2D;
    PolygonFactory *factory3D;
    Invoker *invoTma;
    LinkedList<Polygon*> *l;
public:
    System();
    void add();
    void remove();
    void change();
    void undo();
    void redo();
    void show();
    void printMenu();
};
#endif