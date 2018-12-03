/**
 * @class Test
 * @author Peng Xu
 * @date 03/12/18
 * @file main.cpp
 * @brief 
 *    - automatic allocate memory 
 *    - unique_ptr vs auto_ptr
 *    - unique_ptr can be used on array while auto_ptr cannot
 *
 */

#include <iostream>
#include <memory>
using namespace std;

class Test {
public:
    Test() {
        cout << "created" << endl;
    }
    
    void greet() {
        cout << "Hello" << endl;
    }
    
    ~Test() {
        cout << "destroyed" << endl;
    }
};

class Temp {
private:
    unique_ptr<Test[]> pTest;
    
public:
    Temp(): pTest(new Test[2]) {
        
    }
};

int main(int argc, char **argv) {
    
    Temp temp;
    
    //{
        // unique_ptr<Test> pTest(new Test);
        // auto_ptr<Test> pTest(new Test);
        // unique_ptr<Test[]> pTest(new Test[2]);
    
        // pTest[1].greet();
    //}
    
	cout << "Finished!" << endl;
    
	return 0;
}
