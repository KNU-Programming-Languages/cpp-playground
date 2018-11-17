/**
 * Name: catching.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - bad_alloc is a kind of exception.
 * 
 */

#include <iostream>
using namespace std;

void goesWrong() {
    bool error1Detected = false;
    bool error2Detected = true;
    
    if(error1Detected) {
        throw bad_alloc();
    }
    
    if(error2Detected) {
        throw exception();
    }
}

int main(int argc, char **argv) {
    
    try {
        goesWrong();
    }
    catch(bad_alloc &e) {
        cout << "Catching bad_alloc: " << e.what() << endl;
    }
    catch(exception &e) { // bad_alloc is a kind of exception
        cout << "Catching exception: " << e.what() << endl;
    }
    
    return 0;
}
