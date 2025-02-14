#include <iostream>
using namespace std;

int main() {
    //for-loops
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

   
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n";

        
        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n";  
        }
    }

    int myNumbers[5] = { 10, 20, 30, 40, 50 };

    
    for (int i : myNumbers) {
        cout << i << "\n";

    }
    //do-while
    int j = 0;
    cout << "using do-while loop" << endl;
    do {
        
        cout << j << "\n";
        j++;
    } while (j < 10);



    //while
    int i = 0;
    cout << "using while loop" << endl;
    while (i < 5) {
        
        cout << i << "\n";
        i++;
    }

    //decision making
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y\n";
    }

    int time = 22;
    if (time < 10) {
        cout << "Good morning.";
    }
    else if (time < 20) {
        cout << "Good day.";
    }
    else {
        cout << "Good evening.";
    }

    return 0;
}
