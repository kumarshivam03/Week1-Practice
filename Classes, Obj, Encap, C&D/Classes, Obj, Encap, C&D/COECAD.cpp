#include <iostream>
#include <string>
using namespace std;

class MyClass { 
public:            
    int myNum;       
    string myString; 
};

//constructor and destructor

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor Called!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor Called!" << endl;
    }
};


//encapsulation

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {  // Constructor
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << ", New Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << ", New Balance: $" << balance << endl;
        }
        else {
            cout << "Insufficient balance!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};


int main() {

    //Classes and Objects
    MyClass myObj;  
    myObj.myNum = 15;
    myObj.myString = "Some text\n";
    cout << myObj.myNum << "\n";
    cout << myObj.myString;

    //Constructor and destructor
    Demo d1;

    //Encapsulation
    BankAccount account(1000);
    account.deposit(500);
    account.withdraw(300);
    cout << "Final Balance: $" << account.getBalance() << endl;

    return 0;
}
