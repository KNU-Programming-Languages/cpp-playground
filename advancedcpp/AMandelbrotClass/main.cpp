/**
 * Name: main.cpp
 * 
 * Function:
 *    - static:
 *      
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
    
    double min =  99999;
    double max = -99999;

    for(int y = 0; y < HEIGHT; y++) {
        for(int x = 0; x < WIDTH; x++) {
            double xFractal = (x - WIDTH/2) * 2.0/WIDTH;
            double yFractal = (y - HEIGHT/2) * 2.0/HEIGHT;
            
            if(xFractal < min) min = xFractal;
            if(xFractal > max) max = xFractal;
//            if(yFractal < min) min = yFractal;
//            if(yFractal > max) max = yFractal;
        }
    }
    
    cout << min << ", " <<  max << endl;
    
    bitmap.write("test.bmp");
    
    cout << "Finished." << endl;
    
	return 0;
}
