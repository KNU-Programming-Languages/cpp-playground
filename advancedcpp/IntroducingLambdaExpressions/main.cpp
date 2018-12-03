/**
 * Name: main.cpp
 * 
 * Test:
 * 
 * Take-away:
 * 
 */

#include <iostream>
using namespace std;

void test(void (*pFunc)() ) {
    pFunc();
}

int main(int argc, char **argv) {
    
    // [](){};
    
    // [](){ cout << "Hello" << endl; }(); 
    
    auto func = [](){ cout << "Hello" << endl; }; // a function without a name
    func();
    
    test(func);
    
    test([](){ cout << "Hello again" << endl; });
    
    return 0;
}
