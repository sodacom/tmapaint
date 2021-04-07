#ifndef CHANGECOMMAND_H
#define CHANGECOMMAND_H
#include <vector>
#include "Command.h"
#include "Polygon.h"
#include "LinkedList.h"

class ChangeCommand: public Command{
private:
    LinkedList<Polygon*> *l;
    Polygon *shape;
    std::vector<int> prevAttribute;
    std::vector<int> postAttribute;
    int pos;
public:
    ChangeCommand(LinkedList<Polygon*> *l,int pos);
    void excute();
    void undo();
    void redo();
};
#endif