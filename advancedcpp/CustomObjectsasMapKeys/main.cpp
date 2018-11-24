/**
 * Name: main.cpp
 * 
 * Test Procedure:
 * 
 * Take-away:
 *    - print() need to be declared as "const" ?
 *    - overload '<' for the custom object to be used as keys,
 *      because map would need to sort the values by keys
 * 
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
        cout << name << ": " << age << flush;
    }
    
    bool operator<(const Person &other) const {
        if(name == other.name) {
            return age < other.age;
        }
        return name < other.name;
    }
};

int main(int argc, char **argv) {
    
    map<Person, int> people;
    
    people[Person("Mike", 40)] = 40; // shallow copy
    people[Person("Mike", 444)] = 123; // you cannot add a key that is alreay existed but can update the value
    people[Person("Vicky", 30)] = 30;
    people[Person("Raj", 20)] = 20;
    
    cout << endl;
    
    for(map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
        cout << it->second << ": " << flush;
        it->first.print();
        cout << endl;
    }
    
    return 0;
}
