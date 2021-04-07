#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "NodeData.h"
template <typename T>
class LinkedList{
private:
    NodeData<T> *p_head;
    int size;
public:
    LinkedList();
    void addFront(T val); // Add element to head
    void addTail(T val); // Add element to tail
    void removeFront(); // Remove element at front
    void removeTail(); // Remove element at tail
    void removeElement(NodeData<T> *val); //Remove element at any position
    T remove(int pos);
    T find(int pos);
    void insert(T val, int pos);
    NodeData<T> *head();
    void show();
};
#endif