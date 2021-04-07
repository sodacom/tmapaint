#include "header/AddCommand.h"
// #include "LinkedList.h"
// #include "Command.h"
// #include "Polygon.h"
#include "LinkedList.cpp"
#include "NodeData.cpp"
AddCommand::AddCommand(LinkedList<Polygon*> *l,Polygon *shape){
    this->l=l;
    this->shape = shape;
}
void AddCommand::excute(){
    l->addFront(this->shape);
}
void AddCommand::undo(){
    l->removeFront();
}
void AddCommand::redo(){
    l->addFront(this->shape);
}