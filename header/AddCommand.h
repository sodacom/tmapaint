#ifndef ADDCOMMAND_H
#define ADDCOMMAND_H
#include "LinkedList.h"
#include "Command.h"
#include "Polygon.h"
class AddCommand: public Command{
private:
    LinkedList<Polygon*> *l;
    Polygon *shape;
public:
    AddCommand(LinkedList<Polygon*> *l,Polygon *shape);
    void excute();
    void undo();
    void redo();
};
#endif