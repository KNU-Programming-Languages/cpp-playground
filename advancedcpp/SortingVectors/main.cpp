/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - 3 ways to implement the cmp function in sort()
 *    - friend ... means make the function accessable to the class private members
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Test {
private:
    int id;
    string name;

public:
    Test(int id, string name): id(id), name(name) {
        
    }
    
    void print() {
        cout << id << ": " << name << endl;
    }
    
//    bool operator<(const Test &other) const {
//        return name < other.name;
//    }

    friend bool cmp(const Test &a, const Test &b);
};

bool cmp(const Test &a, const Test &b) {
    return a.name < b.name;
}

int main() {
    
    vector<Test> tests;
    
    tests.push_back(Test(5, "Mike"));
    tests.push_back(Test(10, "Sue"));
    tests.push_back(Test(7, "Raj"));
    tests.push_back(Test(3, "Vicky"));
    
    sort(tests.begin(), tests.end(), cmp);
    
    for(int i = 0; i < tests.size(); i++) {
        tests[i].print();
    }
    
    return 0;
}