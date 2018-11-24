/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - map values need an object with default no-parameter constructor method
 */

#include <iostream>
#include <map>

using namespace std;

class Person {
private:
    string name;
    int age;
    
public:
    Person(): name(""), age(0) {}

    Person(const Person &other) {
        cout << "Copy constructor runing!" << endl;
        name = other.name;
        age = other.age;
    }
    
    Person(string name, int age) :
            name(name), age(age) {
                
            }
            
    void print() const {
        cout << name << ": " << age << endl;
    }
};

int main(int argc, char **argv) {
    
    map<int, Person> people;
    
    people[50] = Person("Mike", 40); // shallow copy
    people[32] = Person("Vicky", 30);
    people[1] = Person("Raj", 20);
    
    cout << endl;
    
    people.insert(make_pair(55, Person("Bob", 45)));
    // people.insert(make_pair(55, Person("Sue", 24)));
    
    cout << endl;
    
    for(map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->first << ": " << flush;
        it->second.print();
    }
    
    return 0;
}
