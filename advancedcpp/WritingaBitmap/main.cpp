/**
 * Name: main.cpp
 * 
 * Function:
 *    - 
 *  
 */
#include <iostream>
#include "Bitmap.h"

using namespace std;
using namespace harryprogramming;

int main(int argc, char **argv) {
	
    Bitmap bitmap(800, 600);
    
    bitmap.write("test.bmp");
    
    cout << "Finished." << endl;
    
	return 0;
}
