/**
 * Name: binary.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 * 
 */

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)

struct Person {
    char name[50];
    int age;
    double weight;
};

#pragma pack(pop)

int main(int argc, char **argv) {
    
    Person someone = {"Frodo", 220, 0.8};
    
    string fileName = "test.bin";
    
    ofstream outputFile;
    
    outputFile.open(fileName, ios::binary);
    
    if(outputFile.is_open()) {
        
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
        
        outputFile.close();
    }
    else {
        cout << "Could not create file " + fileName;
    }

    //// Read binary files ////////////////

    Person someoneElse = {};

    ifstream inputFile;
    
    inputFile.open(fileName, ios::binary);
    
    if(inputFile.is_open()) {
        
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
        
        inputFile.close();
    }
    else {
        cout << "Could not read file " + fileName;
    }
    
    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.weight << endl;
        
    return 0;
}
