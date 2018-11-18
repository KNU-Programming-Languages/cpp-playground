/**
 * Name: padding.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 * 
 */

#include <iostream>
using namespace std;

#pragma pack(push, 1)

struct Person {
    char c;
    char name[50];
    int age;
    double weight;
};

#pragma pack(pop)

int main(int argc, char **argv) {
    
    cout << sizeof(Person) << endl;
    
    return 0;
}
