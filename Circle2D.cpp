#include <iostream>
#include "header/Circle2D.h"
using std::cout;
using std::cin;
void Circle2D::setPoint(){
    cout << "Please enter x = ";
    cin >> x;
    cout << "Please enter y = ";
    cin >> y;
}
void Circle2D::setDimension(){
    cout << "Please enter r = ";
    cin >> r;
}

std::vector<int> Circle2D::getAttribute(){
    std::vector<int> temp;
    temp.push_back(this->x);
    temp.push_back(this->y);
    temp.push_back(this->r);
    return temp;
}

void Circle2D::setAttribute(std::vector<int> attribute){
    this->x = attribute[0];
    this->y = attribute[1];
    this->r = attribute[2];
}

void Circle2D::show(){
    cout << "Circle2D (x,y) = (" << this->x << "," << this->y 
    << ") r = " << this->r << std::endl;
}