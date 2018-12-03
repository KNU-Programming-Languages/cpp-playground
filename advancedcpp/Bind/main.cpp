/**
 * Name: main.cpp
 * 
 * Take-away:
 *    - use of placeholders
 */ 

#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

class Test {
public:
    int add(int a, int b, int c) {
        cout << a << ", " << b << ", " << c << endl;
        return a + b + c;
    }    
};

int run(function<int(int, int)> func) {
    return func(7, 3);
}

int main(int argc, char **argv) {
    
    Test test;
	
    // cout << add(1, 2, 3) << endl;
    
    // auto calculator = bind(add, 3, 4, 5);
    // auto calculator = bind(add, _1, _2, _3); // use placeholders as arguments
    // auto calculator = bind(add, _2, _3, _1); // change order
    auto calculator = bind(&Test::add, test, _2, 100, _1);
    
    // cout << calculator(20, 30) << endl;
    
    // cout << endl;
    
    cout << run(calculator) << endl;
    
	return 0;
}
