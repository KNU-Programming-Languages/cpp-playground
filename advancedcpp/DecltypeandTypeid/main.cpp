/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Issue:
 *
 * Take-away:
 *    - typeid(val).name() returns the type name
 *    - decltype capture the type of the variable
 * 
 */

#include <iostream>
#include <typeinfo>
using namespace std;

int main(int argc, char **argv) {
    
    int val;
    
    cout << typeid(val).name() << endl; // output is "i" indicating the type int
    
    string value;
    
    decltype(value) name = "Bob";
    
    cout << typeid(value).name() << endl;
    
    cout << name << endl;
    
    return 0;
}
