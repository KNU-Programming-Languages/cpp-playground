/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Issue:
 *
 * Take-away:
 *    - auto keyword is enable in cpp 11
 *    - auto func() -> type {}
 */

#include <iostream>
using namespace std;

template<class T>
auto test1(T value) -> decltype(value) {
    return value;
}

template<class T, class S>
auto test2(T value1, S value2) -> decltype(value1 + value2) {
    return value1 + value2;
}

int get() {
    return 999;
}

auto test3() -> decltype(get()) {
    return get();
}

int main(int argc, char **argv) {
    
    auto value = 7;
    // auto text = "Hello";
    
    cout << value << endl;
    
    cout << test1("Hello there") << endl;
    
    cout << test2(5, 6) << endl;
    
    cout << test3() << endl;
    
    return 0;
}
