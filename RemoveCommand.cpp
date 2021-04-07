#include "header/RemoveCommand.h"
#include "LinkedList.cpp"
#include "NodeData.cpp"

RemoveCommand::RemoveCommand(LinkedList<Polygon*> *l, int pos){
    this->l=l;
    this->pos=pos;
    // this->shape=l->find(pos);
    }
void RemoveCommand::excute(){
    this->shape=l->remove(pos);
    }
void RemoveCommand::undo(){
    l->insert(this->shape,pos);
    }
void RemoveCommand::redo(){
    this->shape=l->remove(pos);
    }