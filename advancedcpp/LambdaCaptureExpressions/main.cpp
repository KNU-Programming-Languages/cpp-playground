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
	
    int one = 1;
    int two = 2;
    int three = 3;
    
    [](){ cout << "Hello" << endl; }();
    
    // capture one and two by value
    [one, two](){ cout << one << ", " << two << endl; }();

    // capture all local variables by value
    [=](){ cout << one << ", " << two << endl; }();
    
    // Default capture all local variables by value, but capture three by reference
    [=, &three](){ three = 7; cout << one << ", " << two << endl; }();
    cout << three << endl;
    
    // Default capture all local variables by reference
    [&](){ three = 7; two = 8; cout << one << ", " << two << endl; }();
    cout << two << endl;

    // Default capture all local variables by reference, but two and three by value
    [&, two, three](){ one = 5; cout << one << ", " << two << endl; }();
    cout << one << endl;
    
	return 0;
}
