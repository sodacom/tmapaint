#ifndef NODEDATA_H
#define NODEDATA_H

template <typename T>

class NodeData{
private:
    T data_;
    NodeData<T> *next_;
public:
    NodeData();
    void setData_(T val);
    T getData_();
    void setNext_(NodeData<T> *next);
    NodeData<T> *getNext_();
};
#endif