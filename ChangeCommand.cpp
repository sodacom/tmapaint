#include "header/ChangeCommand.h"
#include "header/LinkedList.h"
#include "LinkedList.cpp"
#include "NodeData.cpp"

ChangeCommand::ChangeCommand(LinkedList<Polygon*> *l,int pos){
    this->l=l;
    this->pos=pos;
    this->shape = l->find(pos);
    this->prevAttribute=this->shape->getAttribute(); 

}
void ChangeCommand::excute(){
    this->shape->setPoint();
    this->shape->setDimension();
    this->postAttribute=this->shape->getAttribute();
}

void ChangeCommand::undo(){
    this->shape->setAttribute(prevAttribute);
}

void ChangeCommand::redo(){
    this->shape->setAttribute(postAttribute);
}