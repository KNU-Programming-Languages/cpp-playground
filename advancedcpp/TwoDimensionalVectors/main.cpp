/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - vector< vector<type> >
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    
    vector< vector<int> > grid(3, vector<int>(4, 7));
    
    grid[1].push_back(8);
    
    for(int row = 0; row < (int)grid.size(); row++) {
        for(int col = 0; col < (int)grid[row].size(); col++) {
            cout << grid[row][col] << flush;
        }
        cout << endl;
    }
    
    return 0;
}
