#include "header/Rectangle2D.h"
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
void Rectangle2D::setPoint(){
    cout << "Please enter x = ";
    cin >> x;
    cout << "Please enter y = ";
    cin >> y;
    }
void Rectangle2D::setDimension(){
    cout << "Please enter w = ";
    cin >> w;
    cout << "Please enter h = ";
    cin >> h;
    }

std::vector<int> Rectangle2D::getAttribute(){
    std::vector<int> temp;
    temp.push_back(this->x);
    temp.push_back(this->y);
    temp.push_back(this->w);
    temp.push_back(this->h);
    return temp;
}

void Rectangle2D::setAttribute(std::vector<int> attribute){
    this->x = attribute[0];
    this->y = attribute[1];
    this->w = attribute[2];
    this->h = attribute[3];
}

void Rectangle2D::show(){
    cout << "Rectangle2D (x,y) = (" << this->x << "," << this->y 
    << ") (w,h) = (" << this->w << "," << this->h <<")"<< std::endl;
    }