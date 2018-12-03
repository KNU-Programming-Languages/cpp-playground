/**
 * Name: main.cpp
 * 
 * Take-away:
 * 
 * 
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	
    int cats = 5;
    
    // [cats]() {
    [cats]() mutable { // pass by value
        cats = 8;
        cout << cats << endl;
    }();
    
    cout << cats << endl;
    
	return 0;
}
