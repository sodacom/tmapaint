#ifndef INVOKER_H
#define INVOKER_H
#include <iostream>
#include <vector>
#include "Command.h"
#include "LinkedList.h"
#include "Polygon.h"
#include "RemoveCommand.h"
#include "AddCommand.h"
#include "ChangeCommand.h"
using namespace std;
class Invoker{
private:
    Command *AddCommand_;
    Command *RemoveCommand_;
    Command *ChangeCommand_;
    vector<Command*> undoCommand;
    vector<Command*> redoCommand;

public:
    // Invoker(LinkedList<Polygon> *l, Polygon *shape){
    //     AddCommand_= new AddCommand(l,shape);
    //     RemoveCommand_ = new RemoveCommand(l,shape);
    // }
    Invoker();
    void setAddCommand(LinkedList<Polygon*> *l, Polygon *shape);
    void setRemoveCommand(LinkedList<Polygon*> *l, int pos);
    void setChangeCommand(LinkedList<Polygon*> *l, int pos);
    void addButtonWasPushed();
    void removeButtonwasPushed();
    void changeButtonwasPushed();
    void undoButtonWasPushed();
    void redoButtonWasPushed();

};
#endif