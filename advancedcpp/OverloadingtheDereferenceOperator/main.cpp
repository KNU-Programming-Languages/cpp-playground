/**
 * Name: main.cpp
 * 
 * Take-away:
 * 
 *  
 */

#include <iostream>
#include "Complex.h"
using namespace std;

int main(int argc, char **argv) {
    
    Complex c1(2, 4);
    
    cout << *c1 + Complex(4, 3) << endl;
    
    cout << *c1 + *Complex(4, 3) << endl;
    
    return 0;
}
