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
    
    Complex c1(2, 3);
    Complex c2(c1);
    
    c1 = c2; 
    
    cout << c1 << endl;
    
    cout << c2 << endl;
    
    Complex c3;

    c3 = c2;
    
    cout << c2 << ": " << c3 << endl;
    
    return 0;
}
