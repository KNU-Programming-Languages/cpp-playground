/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 * 
 */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Test {
private:
    string name;

public:
    Test(string name): name(name) {
        
    }
    
    ~Test() {
        cout << "Object destroyed." << endl;
    }
    
    void print() {
        cout << name << endl;
    }
};

int main() {
    
    // LIFO
    stack<Test> testStack;
    
    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));
    
    cout << endl;
    
    /**
     * This is invalid code! Object is destroyed.
    Test &test1 = testStack.top();
    test1.print();
    
    cout << endl;
     */
    cout << "*****  LIFO  ******" << endl;
    
    while(testStack.size() > 0) {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }
    
    cout << endl;

    cout << "*****************************" << endl << endl;

    // FIFO
    queue<Test> testQueue;
    
    testQueue.push(Test("Mike"));
    testQueue.push(Test("John"));
    testQueue.push(Test("Sue"));
    
    cout << endl;
    
    cout << "*****  FIFO  ******" << endl;
    
    while(testQueue.size() > 0) {
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }
    
    return 0;
}