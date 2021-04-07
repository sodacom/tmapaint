#include "header/NodeData.h"
#include <cstddef>
template <typename T>
NodeData<T>::NodeData(){
    next_ = NULL;
}

template <typename T>
void NodeData<T>::setData_(T val){
    this->data_=val;
}

template <typename T>
T NodeData<T>::getData_(){
    return data_;
}

template <typename T>
void NodeData<T>::setNext_(NodeData<T> *next){
    next_=next;
}

template <typename T>
NodeData<T>* NodeData<T>::getNext_(){
    return next_;
}