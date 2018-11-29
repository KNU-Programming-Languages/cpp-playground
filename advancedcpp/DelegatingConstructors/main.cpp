/**
 * Name: main.cpp
 * 
 * Take-away:
 * 
 * 
 */

#include <iostream>
using namespace std;

class Parent {
    int dogs{5};
    string text{"hello"};
    
public:
    Parent(): Parent("hello") {
        cout << "No parameter parent constructor" << endl;
    }
    
    Parent(string text) {
        cout << "string parent constructor" << endl;
    }
};

class Child: public Parent {
public:
    Child() = default;
};

int main(int argc, char **argv) {
	
    Parent Parent("HAHA");
    Child child;
    
	return 0;
}
