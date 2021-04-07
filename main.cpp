#include <iostream>
#include <vector>
#include "header/LinkedList.h"
#include "header/NodeData.h"
#include "header/Polygon.h"
#include "header/Rectangle2D.h"
#include "header/Rectangle3D.h"
#include "header/Circle2D.h"
#include "header/Circle3D.h"
#include "header/Command.h"
#include "header/RemoveCommand.h"
#include "header/AddCommand.h"
#include "header/System.h"
#include "header/PolygonFactory.h"
#include "header/Factory2D.h"
#include "header/Factory3D.h"
#include "header/Invoker.h"
#include "header/ChangeCommand.h"
#include "LinkedList.cpp"
#include "NodeData.cpp"
using namespace std;

int main(){
    System *tmaPaint = new System;
    int choice=0;
    tmaPaint->printMenu();
    while(1){
    cout << "Please enter you choice: ";
    cin >> choice;
    // cin.ignore();
    switch(choice){
        case 1:
            tmaPaint->add();
            tmaPaint->show();
            break;
        case 2:
            tmaPaint->remove();
            tmaPaint->show();
            break;
        case 3:
            tmaPaint->change();
            tmaPaint->show();
            break;
        case 4:
            tmaPaint->undo();
            tmaPaint->show();
            break;            
        case 5:
            tmaPaint->redo();
            tmaPaint->show();
            break;
        case 6:
            tmaPaint->show();
            break;
        case 7:
            exit(0);
        }
    }

    return 0;
}