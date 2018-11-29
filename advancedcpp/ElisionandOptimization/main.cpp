/**
 * Name: main.cpp
 * 
 * Take-away:
 *    - In C++ 11, it can do return value optimization which 
 *      gets rid of extra copy operations.
 *    - to disable copy elision:
 *      add command to compiler with '-fno-elide-constructors'
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
    Test() {
        cout << "constructor" << endl;
    }
    
    Test(int i) {
        cout << "parameterized constructor" << endl;
    }
    
    Test(const Test &other) {
        cout << "copy constructor" << endl;
    }
    
    Test &operator=(const Test &other) {
        cout << "assignment" << endl;
        return *this;
    }
    
    ~Test() {
        cout << "destructor" << endl;
    }
    
    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
    out << "Hello from test";
    return out;
}
    
Test getTest() {
    return Test();
}

int main(int argc, char **argv) {
	
    Test test1 = getTest();
    
    cout << test1 << endl;
    
    // vector<Test> vec;
    // vec.push_back(Test()); // copy to the slot of the vector
    
	return 0;
}
