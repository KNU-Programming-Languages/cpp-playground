/**
 * Name: main.cpp
 * 
 * Note:
 *    Execution needs a while to print.
 *      
 *  
 */
#include <iostream>
#include <cstdint>
#include <memory>
#include <math.h>
#include "Mandelbrot.h"
#include "Bitmap.h"

using namespace std;
using namespace harryprogramming;

int main(int argc, char **argv) {
	
    int const WIDTH = 800;
    int const HEIGHT = 600;
    
    Bitmap bitmap(WIDTH, HEIGHT);
    
    double min =  99999;
    double max = -99999;
    
    unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS] { 0  }); // c11 style
    unique_ptr<int[]> fractal(new int[WIDTH * HEIGHT] { 0 }); // c11 style

    for(int y = 0; y < HEIGHT; y++) {
        for(int x = 0; x < WIDTH; x++) {
            double xFractal = (x - WIDTH/2 - 200) * 2.0/HEIGHT;
            double yFractal = (y - HEIGHT/2) * 2.0/HEIGHT;
            
            int iterations = Mandelbrot::getIterations(xFractal, yFractal);
            
            fractal[y * WIDTH + x] = iterations;
            
            if(iterations != Mandelbrot::MAX_ITERATIONS) {
                histogram[iterations]++;
            }
        }
    }
    
    int total = 0;
    for(int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
        total += histogram[i];
    }
    
    for(int y = 0; y < HEIGHT; y++) {
        for(int x = 0; x < WIDTH; x++) {
            
            uint8_t red = 0;
            uint8_t green = 0;
            uint8_t blue = 0;
            
            int iterations = fractal[y * WIDTH + x];
            
            if(iterations != Mandelbrot::MAX_ITERATIONS) {
            
                double hue = 0.0;
                
                for(int i = 0; i <= iterations; i++) {
                    hue += ((double) histogram[i]) / total;
                }
            
                green = pow(255, hue);
            }

            bitmap.setPixel(x, y, red, green, blue);
        }
    }
    
    bitmap.write("test.bmp");
    
    cout << "Finished." << endl;
    
	return 0;
}
