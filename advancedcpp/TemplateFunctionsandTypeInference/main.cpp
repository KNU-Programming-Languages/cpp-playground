#include <iostream>

using namespace std;

// template<class T>
template<typename T>
void print(T n) {
    cout << "Template version: " << n << endl;
}

void print(int val) {
    cout << "Non-template version: " << val << endl;
}

template<typename T>
void show() {
    cout << T() << endl;
}

int main(int argc, char **argv) {
    
    print<string>("Hello");
    print<int>(5);
    
    print("Hi There");
    
    print(5);
    print<>(6); // infere the type by the argument
    
    show<double>(); // infere the type
    
    return 0;
}
