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
    
    int value{5};
    cout << value << endl;
    
    string text{"Hello"};
    cout << text << endl;
    
    int numbers[]{1, 2, 4};
    cout << numbers[1] << endl;
    
    int *pInts = new int[3]{1, 2, 3};
    cout << pInts[1] << endl;
    delete pInts;
    
    int value1{};
    cout << value1 << endl;
    
    int *pSomething{&value};
    cout << *pSomething << endl;
    
    int *pElsething{nullptr}; // equivalent to 'int *pElsething = nullptr;'
    cout << pElsething << endl; // 0x0

    int numbers1[5]{};
    cout << numbers1[1] << endl;

    struct {
        int value;
        string text;
    } s1{5, "Hi"};
    
    cout << s1.text << endl;
    
    /** main take-away **/
    vector<string> strings{"one", "two", "three"};
    cout << strings[2] << endl;
    
	return 0;
}
