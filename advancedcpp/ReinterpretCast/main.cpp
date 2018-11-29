/*
 * Take-away:
 *    - reinterpret_cast uses less check than static_cast
 * 
 */

#include <iostream>
using namespace std;

class Parent {
public:
    virtual void speak() {
        cout << "parent" << endl;
    }
};

class Brother: public Parent {
    
};

class Sister: public Parent {
    
};

int main(int argc, char **argv) {
	
    Parent parent;
    Brother brother;
    Sister sister;
    
    Parent *ppb = &brother;
    
    // Sister *pbb = dynamic_cast<Sister *>(ppb); // does not make sense which leads to invalid cast
    Sister *pbb = reinterpret_cast<Sister *>(ppb); // less check than static_cast
    
    if(pbb == nullptr) {
        cout << "Invalid cast" << endl;
    } else {
        cout << pbb << endl;
    }

	return 0;
}
