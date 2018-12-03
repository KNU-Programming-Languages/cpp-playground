/*
 * Take-away:
 *    - static_cast does not do a run time check
 *    - while dynamic_cast needs.
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
    
    // Parent *ppb = &parent;
    Parent *ppb = &brother;
    
    // Brother *pbb = ppb;
    Brother *pbb = dynamic_cast<Brother *>(ppb); // cast it down to the sub class object
    
    if(pbb == nullptr) {
        cout << "Invalid cast" << endl;
    } else {
        cout << pbb << endl;
    }

	return 0;
}
