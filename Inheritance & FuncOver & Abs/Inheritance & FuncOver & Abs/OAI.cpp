#include <iostream>
using namespace std;

//inheritance
class Animal {
public:
    void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

//Func overriding:-
class Creature {
public:
    virtual void makeSound() { 
        cout << "Animal makes a sound" << endl;
    }
};

class Lion : public Creature {
public:
    void makeSound() {  
        cout << "Lion Roars" << endl;
    }
};

//abstraction
class System {
public:
    virtual void readWrite() = 0;  
};

class Laptop : public System {
public:
    void readWrite() {
        cout << "Read-Write performed" << endl;
    }
};


int main() {

    //inheritance
    Dog myDog;
    myDog.makeSound(); 
    myDog.bark(); 

    //func overriding
    Creature* myCreature;
    Lion myLion;
    myCreature = &myLion;
    myCreature->makeSound();

    //alternative of above
    /*Lion myLion;
    Creature& myCreature = myLion;
    myCreature.makeSound();*/


    //abstraction
    Laptop lapObj;
    lapObj.readWrite();

    return 0;
}
