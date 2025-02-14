#include<iostream>
using namespace std;


namespace myNamespace {
    int x = 10;
    void display() {
        cout << "Inside namespace value of x: " << x << endl;
    }
}
int main() {
    //namespace
    myNamespace::display();
    cout << "Using namspace in main func x value : " << myNamespace::x << endl;
}