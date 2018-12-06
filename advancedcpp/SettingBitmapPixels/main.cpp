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
	
    int const WIDTH = 800;
    int const HEIGHT = 600;
    
    Bitmap bitmap(WIDTH, HEIGHT);
    
    bitmap.setPixel(WIDTH/2, HEIGHT/2, 255, 255, 255);
    
    bitmap.write("test.bmp");
    
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            bitmap.setPixel(j, i, 255, 255, 255);
        }
    }
    
    bitmap.write("white.tmp");
    
    cout << "Finished." << endl;
    
	return 0;
}
