/**
 * Name: main.cpp
 * 
 * Take-away:
 * 
 */

#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
    static const int SIZE=100;
    
    int *_pBuffer;
    
public:
    Test() {
        cout << "constructor" << endl;
        _pBuffer = new int[SIZE]{};
        // memset(_pBuffer, 0, sizeof(int)*SIZE);
    }
    
    Test(int i) {
        cout << "parameterized constructor" << endl;
        _pBuffer = new int[SIZE]{};
        
        for(int i = 0; i < SIZE; i++) {
            _pBuffer[i] = 7*i;
        }
    }
    
    Test(const Test &other) {
        cout << "copy constructor" << endl;
        
        _pBuffer = new int[SIZE]{};
        
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
    }
    
    Test &operator=(const Test &other) {
        cout << "assignment" << endl;
        
        _pBuffer = new int[SIZE]{};
        
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
        
        return *this;
    }
    
    ~Test() {
        cout << "destructor" << endl;
        
        delete[] _pBuffer;
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
    
    vector<Test> vec;
    vec.push_back(Test()); // copy to the slot of the vector
    
    int value1 = 7; // lvalue = rvalue
    
    int *pValue = &value1; // value1 is a lvalue which can be taken the address of
    // int *pValue = &7; // 7 is a rvalue
    
    Test *pTest1 = &test1;
    // Test *pTest2 = &getTest();
    
    int *pValue3 = &++value1;
    cout << *pValue3 << endl;
    
    // int *pValue4 = &value1++;
    // cout << *pValue4 << endl;    

    // int *s = &(7 + value1); // error: lvalue required as unary '&' operand
    
	return 0;
}
