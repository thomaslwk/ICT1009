#ifndef ARRAY_H
#define ARRAY_H

template<class T> 
class Array{
    T*data; 
    int size; 
    public: 
        Array(T* d, int s);
        void showList();
        void showFirst(); 
        void showLast();
};

#endif 