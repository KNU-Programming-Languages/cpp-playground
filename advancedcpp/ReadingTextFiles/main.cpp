/**
 * Name: reading.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 * 
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
    
    string inFileName = "test.txt";
    
    ifstream inFile;
    
    inFile.open(inFileName);
    
    if(inFile.is_open()) {
        
        string line;
        
        // inFile >> line;
        
        //while(!inFile.eof()) {
        while(inFile) {
            getline(inFile, line);
            cout << line << endl;
        }
        
        inFile.close();
    }
    else {
        cout << "Could not open file: " << inFileName << endl;
    }
    
    return 0;
}
