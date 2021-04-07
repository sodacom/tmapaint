#include "header/Invoker.h"

Invoker::Invoker(){;}
void Invoker::setAddCommand(LinkedList<Polygon*> *l, Polygon *shape){
    AddCommand_= new AddCommand(l,shape);
    }

void Invoker::setRemoveCommand(LinkedList<Polygon*> *l, int pos){
    RemoveCommand_=new RemoveCommand(l,pos);
    }

void Invoker::setChangeCommand(LinkedList<Polygon*> *l,int pos){
    ChangeCommand_=new ChangeCommand(l,pos);
}

void Invoker::addButtonWasPushed(){
    AddCommand_->excute();
    undoCommand.push_back(AddCommand_);
    redoCommand.clear();
}

void Invoker::removeButtonwasPushed(){
    RemoveCommand_->excute();
    undoCommand.push_back(RemoveCommand_);
    redoCommand.clear();
}

void Invoker::changeButtonwasPushed(){
    ChangeCommand_->excute();
    undoCommand.push_back(ChangeCommand_);
    redoCommand.clear();
}

void Invoker::undoButtonWasPushed(){
    int i = undoCommand.size();
    if (i!=0){
        undoCommand[i-1]->undo();
        redoCommand.push_back(undoCommand[i-1]);
        undoCommand.pop_back();
    }
    else cout << "Can't Undo" << endl;
    }

void Invoker::redoButtonWasPushed(){
    int i= redoCommand.size();
    if (i!=0){
        redoCommand[i-1]->redo();
        undoCommand.push_back(redoCommand[i-1]);
        redoCommand.pop_back();
    }
    else cout << "Can't Redo" << endl;
}
