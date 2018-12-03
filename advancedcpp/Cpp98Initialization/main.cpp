/**
 * Name: main.cpp
 * 
 * Test:
 * 
 * Take-away:
 * 
 * 
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
    
    int values[] = {1, 4, 5};
    
    cout << values[0] << endl;

    class C {
    public:
        string text;
        int id;
    };
    
    C c1 = {"Hello", 7};
    
    cout << c1.text << endl;

    struct S {
        string text;
        int id;
    };
    
    S s1 = {"Hello", 7};
    
    cout << s1.text << endl;   

    struct P {
        string text;
        int id;
    } p1 = {"Hello", 7}, p2 = {"Hi", 9};
    
    cout << p1.text << endl;
    cout << p2.text << endl;
    
    vector<string> strings;
    
    strings.push_back("One");
    strings.push_back("Two");
    strings.push_back("Three");
    
	return 0;
}
