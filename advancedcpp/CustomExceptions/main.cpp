/**
 * Name: custom.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - override what() function in exception class;
 */

#include <iostream>
using namespace std;

class MyException: public exception {
public:
    virtual const char* what() throw() {
        return "Something bad happened!";
    }
};

class Test {
public:
    void goesWrong() {
        throw MyException();
    }
};

int main(int argc, char **argv) {
    
    Test test;
    
    try {
        test.goesWrong();
    }
    catch(MyException &e) {
        cout << e.what() << endl;
    }
    
    return 0;
}
