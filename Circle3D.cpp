#include "header/Circle3D.h"
#include <iostream>
using std::cout;
using std::cin;
void Circle3D::setPoint(){
    cout << "Please enter x = ";
    cin >> x;
    cout << "Please enter y = ";
    cin >> y;
    cout << "Please enter z = ";
    cin >> z;
    }
void Circle3D::setDimension(){
    cout << "Please enter r = ";
    cin >> r;
    }

std::vector<int> Circle3D::getAttribute(){
    std::vector<int> temp;
    temp.push_back(this->x);
    temp.push_back(this->y);
    temp.push_back(this->z);
    temp.push_back(this->r);
    return temp;
}    

void Circle3D::setAttribute(std::vector<int> attribute){
    this->x = attribute[0];
    this->y = attribute[1];
    this->z = attribute[2];
    this->r = attribute[3];
}

void Circle3D::show(){
    cout << "Rectangle3D (x,y,z) = (" << this->x << "," << this->y 
    <<","<< this->z << ") r = " << this->r << std::endl;
}