/**
 * Name: main.cpp
 * 
 * Take-away:
 * 
 *  
 */

#include <iostream>
using namespace std;

class Test {
private:
    int id;
    string name;
    
public:
    Test(): id(0), name("") {
        
    }
    
    Test(int id, string name): id(id), name(name) {
        
    }
    
    void print() {
        cout << id << ": " << name << endl;
    }
    
    const Test &operator=(const Test &other) {
        
        cout << "Assignment running." << endl;
        id = other.id;
        name = other.name;
        
        return *this;
    }
    
    Test(const Test &other) {
        *this = other;
    }
    
    // friend is to make private members accessable in here
    friend ostream &operator<<(ostream &out, const Test &test) {
        out << test.id << ": " << test.name;
        return out;
    } 
};

int main(int argc, char **argv) {
    
    Test test1(10, "Mike");
    Test test2(12, "Bob");
    
    (cout << test1) << endl;
    
    int value = 1 + (2 + 5);
    
    cout << endl;
    
    cout << test1 << test2 << endl;
    
    return 0;
}
