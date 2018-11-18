/**
 * Name: writing.cpp
 * 
 * Test Procedure:
 * 
 * Issue:
 *    - When I use a string variable to be opened in outFile.open(),
 *      it doesn't work and shows:
 *      error: no matching function for call to 'std::basic_ofstream
 *      <char>::open(std::__cxx11::string&)'
 * 
 *    > Solution:
 *      Change
 *        ifstream file(filename);
 *      to
 *        ifstream file(filename.c_str());
 *      Because the constructor for an ifstream takes a const char*, 
 *      not a string pre-C++11.
 * 
 *    > Or in CodeLite enable C++ 11 as follows,
 *      1. Right click on the project in the workspace view.
 *      2. Select Settings near the bottom of this pop-up menu. Common
 *         Settings->Compiler->C++ Compiler Options
 *      3. Click into the semicolon delimited list of compiler switches
 *         to reveal elipses and click on the elipses.
 *      4. Click the checkbox for -std=c++11
 *
 * Take-away:
 * 
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
    
    // ofstream outFile;
    fstream outFile;
    
    string outputFileName = "text.txt";
    
    // outFile.open(outputFileName.c_str());
    outFile.open(outputFileName, ios::out);
    
    if(outFile.is_open()) {
        outFile << "Hello there" << endl;
        outFile << 123 << endl;
        outFile.close();
    }
    else {
        cout << "Could not create file: " << outputFileName << endl;
    }
    
    return 0;
}
