#include "header/Rectangle3D.h"
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
void Rectangle3D::setPoint(){
    cout << "Please enter x =";
    cin >> x;
    cout << "Please enter y = ";
    cin >> y;
    cout << "Please enter z = ";
    cin >> z;
    }
void Rectangle3D::setDimension(){
    cout << "Please enter w = ";
    cin >> w;
    cout << "Please enter h = ";
    cin >> h;
    }

std::vector<int> Rectangle3D::getAttribute(){
    std::vector<int> temp;
    temp.push_back(this->x);
    temp.push_back(this->y);
    temp.push_back(this->z);
    temp.push_back(this->w);
    temp.push_back(this->h);
    return temp;
}

void Rectangle3D::setAttribute(std::vector<int> attribute){
    this->x = attribute[0];
    this->y = attribute[1];
    this->z = attribute[2];
    this->w = attribute[3];
    this->h = attribute[4];
}

void Rectangle3D::show(){
    std::cout << "Rectangle3D (x,y,z) = (" << this->x << "," << this->y 
    <<","<< this->z << ") (w,h) = (" << this->w << "," << this->h <<")"<< std::endl;
    }