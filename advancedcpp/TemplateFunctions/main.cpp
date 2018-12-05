#include <iostream>

using namespace std;

// template<class T>
template<typename T>
void print(T n) {
    cout << n << endl;
}

int main(int argc, char **argv) {
    
    print<string>("Hello");
    print<int>(5);
    
    print("Hi There");
    
    return 0;
}
