#include <iostream>
using namespace std;

void modifyCallByValue(int x) {
    x = x + 10; 
}
void modifyCallByRef(int &x) {
    x = x + 10;
}

int main() {
    int num = 20;
    modifyCallByValue(num);
    cout << "Original Value: " << num << endl; 

    modifyCallByRef(num);
    cout << "Changed Value: " << num << endl;
    return 0;
}
