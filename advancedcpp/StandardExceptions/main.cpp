/**
 * Name: standard.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - bad_alloc exception:
 *      When computer cannot allocate the memory it 
 *      throws a bad_alloc error.
 * 
 */

#include <iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMemory = new char[999999999999999];
        delete [] pMemory;
    }
};

int main(int argc, char **argv) {
    
    try { 
        CanGoWrong wrong;
    }
    catch(bad_alloc &e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    
    cout << "Still running." << endl;
    
    return 0;
}
