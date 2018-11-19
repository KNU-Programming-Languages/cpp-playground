/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Issue:
 *
 * Take-away:
 *    - How to define a class template?
 *      1. Put "template<class T>" or "template<typename T>"
 *         before the class definition.
 *      2. Put <T> after the class name.
 *      3. Example:
 *         *****
 *         template<class T>
 *         class wall<T> {};
 *         *****
 * 
 */

#include <iostream>
#include "ring.h"
using namespace std;

int main(int argc, char **argv) {
    
    ring<int>::iterator it;
    
    it.print();
    
//    cout << *it << endl;
    
//    ring<string> textring(3);
//    
//    textring.add("one");
//    textring.add("two");
//    textring.add("three");
//    textring.add("four");
//    
//    for(int i = 0; i < textring.size(); i++) {
//        cout <<  textring.get(i) << endl;
//    }
    
    return 0;
}
