#ifndef REMOVECOMMAND_H
#define REMOVECOMMAND_H
#include "Command.h"
#include "LinkedList.h"
#include "Polygon.h"
class RemoveCommand: public Command{
private:
    LinkedList<Polygon*> *l;
    Polygon *shape;
    int pos;
public:
    RemoveCommand(LinkedList<Polygon*> *l, int pos);
    void excute();
    void undo();
    void redo();
};
#endif