/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    1. vector<type>, strings[i]
 *    2. vector<type>::iterator
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    
//    vector<string> strings(5);
//    
//    strings[3] = "dog";
//    
//    cout << strings[3] << endl;
    
    vector<string> strings;
    
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    
    for(int i = 0; i < (int)strings.size(); i++) {
        cout <<  strings[i] << endl;
    }
    
    cout << endl;
        
//    vector<string>::iterator it = strings.begin();
//    
//    cout << *it << endl;
    
    for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++) {
        cout << *it << endl;
    }
    
    return 0;
}
