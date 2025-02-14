#include <iostream>
#include <string>
using namespace std;

int main() {

	//using pointers
	string food = "Pizza";  
	string* ptr = &food;  
	cout << food << "\n";
	cout << &food << "\n";
	cout << ptr << "\n";
	cout << *ptr << "\n";
	*ptr = "Burger";
	cout << *ptr << endl;
	cout << food << endl;

	string &meal = food;
	cout << meal << endl;

	int a = 5, b = 10;

	int* jptr = &a; 
	int& ref = a;   

	cout << "Pointer points to value: " << *jptr << endl;
	cout << "Reference value: " << ref << endl;

	jptr = &b;  
	

	cout << "Pointer now points to value: " << *jptr << endl;
	cout << "Reference still refers to: " << ref << endl;
	return 0;
}
