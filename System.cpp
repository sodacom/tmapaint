#include "header/System.h"
#include "LinkedList.cpp"
#include "NodeData.cpp"
System::System(){
    this->factory2D = new Factory2D;
    this->factory3D = new Factory3D;
    this->invoTma = new Invoker;
    this->l = new LinkedList<Polygon*>;
}

void System::add(){
    int m,n;
    cout << "Please choose 1.2D or 2.3D = ";
    cin >> m;
    cout << "Please choose 1.Rectangle or 2.Circle = ";
    cin >> n;
    if (m==1&&n==1){
        Polygon *shape = this->factory2D->createRectangle();
        shape->setPoint();
        shape->setDimension();
        invoTma->setAddCommand(l,shape);
        invoTma->addButtonWasPushed();
    }
    else if(m==1&&n==2){
        Polygon *shape = factory2D->createCircle();
        shape->setPoint();
        shape->setDimension();
        invoTma->setAddCommand(l,shape);
        invoTma->addButtonWasPushed();
    }
    else if(m==2&&n==1){
        Polygon *shape = factory3D->createRectangle();
        shape->setPoint();
        shape->setDimension();
        invoTma->setAddCommand(l,shape);
        invoTma->addButtonWasPushed();
    }
    else if(m==2&&n==2){
        Polygon *shape = factory3D->createCircle();
        shape->setPoint();
        shape->setDimension();
        invoTma->setAddCommand(l,shape);
        invoTma->addButtonWasPushed();
    }
}

void System::remove(){
    int pos;
    cout << "Please choose the object which you want to remove:" << endl;
    cin >> pos;
    invoTma->setRemoveCommand(l,pos);
    invoTma->removeButtonwasPushed();
    }
void System::change(){
    int pos;
    cout << "Please select the object which you want to change parameters: ";
    cin >> pos;
    invoTma->setChangeCommand(l,pos);
    invoTma->changeButtonwasPushed();
}
void System::undo(){
        invoTma->undoButtonWasPushed();
    }
void System::redo(){
        invoTma->redoButtonWasPushed();
    }
void System::show(){
        l->show();
    }
void System::printMenu(){
    cout <<"Welcome to TmaPaint" << endl;
    cout <<"MENU PROGRAM" << endl;
    cout << "1.Add" << endl;
    cout << "2.Remove" << endl;
    cout << "3.Change" << endl;
    cout << "4.Undo" << endl;
    cout << "5.Redo" << endl;
    cout << "6.Draw" << endl;
    cout << "7.Quit" << endl;
}