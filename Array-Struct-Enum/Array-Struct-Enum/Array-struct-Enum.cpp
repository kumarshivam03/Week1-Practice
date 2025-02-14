#include <iostream>
#include <string>
using namespace std;


//structures using variable

struct {
	int usn;
	string name;
	string branch;
}MyStruct, MyStruct1;

//structure using name

struct car {
	string name;
	string company;
};

//enum

enum Student {
	AGE=21,
	USN
};

enum Level {
	LOW = 1,
	MEDIUM,
	HIGH
};


int main() {
	//array
	string cars[] = { "Volvo", "BMW", "Ford", "Mazda" };
	for (int i = 0; i <4; i++) {
		cout << cars[i] << " ";
	}
	cout << endl;
	int myNumbers[5] = { 10, 20, 30, 40, 50 };

	// Loop through integers
	for (int i : myNumbers) {
		cout << i << "\n";
	}
	cout <<"Size of array is :"<< sizeof(myNumbers)<<endl;
	cout << "Size using formula:" << endl;
	for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
		cout << myNumbers[i] << "\n";
	}

	//multi-dimension-array

	string letters[2][4] = {
	{ "A", "B", "C", "D" },
	{ "E", "F", "G", "H" }
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << letters[i][j] << "\n";
		}
	}

	//structures

	MyStruct.usn = 12;
	MyStruct.name="Shivam";
	MyStruct.branch="CSE";

	cout << "USN:-"<< MyStruct.usn <<endl;
	cout << "Name:-" << MyStruct.name << endl;
	cout << "Branch:-" << MyStruct.branch << endl;

	MyStruct1.usn = 13;
	MyStruct1.name = "Rahul";
	MyStruct1.branch = "CSE";

	cout << "USN:-" << MyStruct1.usn << endl;
	cout << "Name:-" << MyStruct1.name << endl;
	cout << "Branch:-" << MyStruct1.branch << endl;
	cout << endl;
	//using name of structures
	car myCar;
	myCar.name = "Mahindra";
	myCar.company = "MBolero Power SlX";

	cout << "Car Name:-" << myCar.name << endl;
	cout << "Car Company:-" << myCar.company << endl;

	//enum usage

	enum Student myAge=AGE;
	enum Student myUsn = USN;
	cout << "My age is using enum " << myAge << endl;
	cout <<"My USN is using enum " << myUsn << endl;
	
	enum Level myVar = MEDIUM;

	switch (myVar) {
	case 1:
		cout << "Low Level";
		break;
	case 2:
		cout << "Medium level";
		break;
	case 3:
		cout << "High level";
		break;
	}
	return 0;
}
