#ifndef RING_H
#define RING_H

#include <iostream>
using namespace std;

//template<typename T>
template<class T>
class ring {
public:
    class iterator;

};

// a nested class is similar to a method definition
// within a class
template<class T>
class ring<T>::iterator {
public:
    void print();
};

template<class T>
void ring<T>::iterator::print() {
    cout << "Hello from iterator: " << T() << endl;
}

#endif // RING_H
