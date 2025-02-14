#include <iostream>
using namespace std;
//func overload
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b) {
        return a + b;
    }
};
//operator overload
class Number {
public:
    int value;

    Number(int v) : value(v) {}

    // Overloading + operator
    Number operator+(Number obj) {
        return Number(value + obj.value);
    }
};

//default parameter
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    //func overloading
    Math obj;
    cout << "Sum (int): " << obj.add(5, 10) << endl;      
    cout << "Sum (int, int, int): " << obj.add(2, 3, 4) << endl; 
    cout << "Sum (double): " << obj.add(3.5, 2.1) << endl; 

    //opr overlaoding
    Number n1(5), n2(10);
    Number n3 = n1 + n2; 
    cout << "Sum: " << n3.value << endl;

    //default parameter
    greet("Shivam"); 
    greet();
    return 0;
}
