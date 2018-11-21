/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - list<type> num;
 *    - push_back(val)
 *    - push_front(val)
 *    - insert(pos, val) puts val before iterator pos
 * 
 */

#include <iostream>
#include <list>

using namespace std;

int main(int argc, char **argv) {
    
    list<int> numbers;
    
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    
    numbers.push_front(0);
    
    list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    cout << "Element: " << *it << endl;
    
    list<int>::iterator eraseIt = numbers.begin();
    eraseIt++;
    // numbers.erase(eraseIt); // if not return a new iterator, it would run by chance and we should not do this
    eraseIt = numbers.erase(eraseIt);
    cout << "Element: " << *eraseIt << endl; 
    
    for(list<int>::iterator it = numbers.begin(); it != numbers.end();) {
        if(*it == 2) {
            numbers.insert(it, 1234);
        }
        if(*it == 1) {
            it = numbers.erase(it);
        }
        else{
            it++;
        }
    }
    
    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
    }
    
    return 0;
}
