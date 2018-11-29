#include <iostream>

int main(int argc, char **argv) {

    extern int i; // declares but does not define i 
    int j; //declare and defines j
    
    extern double pi = 3.1416; // error: 'extern' and initializer cannot exist together

	return 0;
}
