#include <iostream>
using namespace std;

class Parent {
public:
    void speak() {
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
    
    // float value = 3.23;
    // cout << static_cast<int>(value) << endl;
    
    Parent *pp = &brother;
    
    // Brother *pb = &parent;
    Brother *pb = static_cast<Brother *>(&parent);
    
    cout << pb << endl;
    
    Parent *ppb = &brother;
    
    // Brother *pbb = ppb;
    Brother *pbb = static_cast<Brother *>(ppb);
    
    cout << ppb << endl;
    
    // Parent &&p = Parent(); // pass a rvalue
    Parent &&p = static_cast<Parent &&>(parent); // pass a lvalue as rvalue
    p.speak();
    
	return 0;
}
