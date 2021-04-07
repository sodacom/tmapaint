#include "header/LinkedList.h"
#include <iostream>
template <typename T>
LinkedList<T>::LinkedList(){
    p_head=NULL;
    size=0;
}

//Add Element Add Front
template <typename T>
void LinkedList<T>::addFront(T val){
    NodeData<T> *temp = new NodeData<T>;
    temp->setData_(val);
    temp->setNext_(p_head);
    p_head=temp;
    this->size+=1;
}

template <typename T>
void LinkedList<T>::addTail(T val){
    NodeData<T> *temp = new NodeData<T>;
    NodeData<T> *p=p_head;
    temp->setData_(val);
    while(p->getNext_()!=NULL){
        p=p->getNext_();
    }
    p->setNext_(temp);
    this->size+=1;
}

//Remove Element at Front
template <typename T>
void LinkedList<T>::removeFront(){
    NodeData<T> *temp = p_head;
    p_head = p_head->getNext_();
    temp->setNext_(NULL);
    delete temp;
    this->size-=1;
}

//Remove Element at Tail
template <typename T>
void LinkedList<T>::removeTail(){
    NodeData<T>*p=p_head;
    while(p->getNext_()->getNext_()!=NULL) p=p->getNext_();
    delete(p->getNext_());
    p->setNext_(NULL);
    this->size-=1;
}

//Remove Element at Any position
template <typename T>
void LinkedList<T>::removeElement(NodeData<T> *val){
    NodeData<T> *p=p_head;
    if (val==p_head) removeFront();
    else if (val->getNext_()==NULL) removeTail();
    else{
        while(p->getNext_()!=val) p=p->getNext_();
        NodeData<T> *temp=p->getNext_();
        p->setNext_(temp->getNext_());
        delete(temp);
    }
    this->size+=1;
}

template <typename T>
T LinkedList<T>::remove(int pos){
    NodeData<T> *p=p_head;
    if (pos==1) {
        p_head = p_head->getNext_();
        p->setNext_(NULL);
        T data=p->getData_();
        delete p;
        return data;
    }
    else if (pos==size) {
        while(p->getNext_()->getNext_()!=NULL) p=p->getNext_();
        T data=p->getNext_()->getData_();
        delete(p->getNext_());
        p->setNext_(NULL);
        return data;       
    }
    else{
        int i=1;
        while(i!=pos-1){
            p = p->getNext_();
            i++;
        }
        NodeData<T> *temp=p->getNext_();
        T data = temp->getData_();
        p->setNext_(temp->getNext_());
        delete(temp);
        return data;
    }
    this->size-=1;
} 

//Find element with pos is known
template <typename T>
T LinkedList<T>::find(int pos){
    NodeData<T> *p=p_head;
    int i=1;
    while(i!=pos){
        p = p->getNext_();
        i++;
    }
    return (p->getData_());
}

template <typename T>
void LinkedList<T>::insert(T val, int pos){
    if (pos == 1) addFront(val);
    else if (pos > size) addTail(val);
    else {
        NodeData<T> *p = p_head;
        NodeData<T> *temp = new NodeData<T>;
        temp->setData_(val);
        int i=1;
        while(i != pos-1){
            p = p->getNext_();
            i++;
        }
        temp->setNext_(p->getNext_());
        p->setNext_(temp);
    }
    this->size+=1;
}


//Get first element of linked list;
template <typename T>
NodeData<T>* LinkedList<T>::head(){
    return p_head;
}

//Show the LinkedList
template <typename T>
void LinkedList<T>::show(){
    std::cout << "\n";
    int i=1;
    NodeData<T> *temp=p_head;
    while(temp!=NULL){
        std::cout << i << "."; //Ordinal Numbers of element in LinkedList
        temp->getData_()->show(); // <~~~~~ function show() of Class Polygon
        temp=temp->getNext_();
        i++;
    }
    std::cout << "\n";
}

