/**
 * Name: main.cpp
 * 
 * Test:
 * 
 * Take-away:
 *    - What does "initializer_list" do?
 * 
 *      An object of type std::initializer_list<T> is a 
 *      lightweight proxy object that provides access to an
 *      array of objects of type const T.
 * 
 *      std::initializer_list can be used wherever you need 
 *      an expression of the form of {value1, value2, ....,
 *      valueN}. It is why other containers from the Standard
 *      library also define constructor that takes 
 *      std::initializer_list as argument. In this way, no 
 *      container depends on any other container for 
 *      construction from expressions of the form of 
 *      {value1, value2, ...., valueN}.
 * 
 */

#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test {
public:
    Test(initializer_list<string> texts) {
        for(auto value: texts) {
            cout << value << endl;
        }
    }
    
    void print(initializer_list<string> texts) {
        for(auto value: texts) {
            cout << value << endl;
        }
    }
};

int main(int argc, char **argv) {
    
    vector<int> numbers {1, 3, 4, 6};
    cout << numbers[2] << endl;
    
    Test test{"apple", "orange", "banana"};
    
    cout << endl;
    
    test.print({"one", "two", "three", "four"});
    
	return 0;
}
