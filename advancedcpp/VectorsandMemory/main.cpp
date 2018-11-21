/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - capacity() of a vector, which is different of size(),
 *      is the number of the memory allocated for the vector.
 *    - resize() for size
 *    - reserve() for capacity
 *         ? different with what is taught in the lesson
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    
    vector<double> numbers(0);
    
    cout << "Size: " << numbers.size() << endl;
    
    int capacity = numbers.capacity();
    
    for(int i = 0; i < 10000; i++) {
        
        if((int)numbers.capacity() != capacity) {
            capacity = numbers.capacity();
            cout << "Capacity: " << capacity << endl;
        }
        
        numbers.push_back(i);
    }
    
//    numbers.clear();
//    cout << "Size: " << numbers.size() << endl;
//    cout << "Capacity: " << capacity << endl;
    
    numbers.reserve(100000);
    cout <<  numbers[2] << endl;
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << capacity << endl;
    
    return 0;
}
