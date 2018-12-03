/**
 * Name: main.cpp
 * 
 * Take-away:
 *    - static_cast vs forward
 * 
 */ 

#include <iostream>
using namespace std;

class Test {
    
};

template<typename T>
void call(T &&arg) {
    check(forward<T>(arg));
}

void check(Test &test) {
    cout << "lvalue" << endl;
}

void check(Test &&test) {
    cout << "rvalue" << endl;
}

int main(int argc, char **argv) {
	
    Test test;
    
    // auto &&t = test;
    
    // call(Test());
    call(test);
    
    
	return 0;
}
