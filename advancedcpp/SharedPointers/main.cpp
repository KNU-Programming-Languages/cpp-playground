/**
 * @class Test
 * @author Peng Xu
 * @date 03/12/18
 * @file main.cpp
 * @brief 
 *    - the memory will not be released until all the pointers are out of the scope
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

int main(int argc, char **argv) {
    
//    shared_ptr<Test> pTest1 = make_shared<Test>();
//    
//    shared_ptr<Test> pTest2 = pTest1;

    shared_ptr<Test> pTest2(nullptr);
    
    {
        shared_ptr<Test> pTest1 = make_shared<Test>();
        
        pTest2 = pTest1;
        
        auto pTest3 = pTest1;
    }
    
    cout << "Finished" << endl;
    
	return 0;
}
