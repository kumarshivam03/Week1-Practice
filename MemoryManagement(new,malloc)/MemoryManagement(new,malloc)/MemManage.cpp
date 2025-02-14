#include <iostream>
using namespace std;

void stackFunc() {
    int x = 10;  // Stored in stack
    cout << "Stack Variable x: " << x << endl;
} // x is destroyed after this function ends

void heapFunction() {
    int* ptr = new int(20); // Allocated in heap
    cout << "Heap Variable: " << *ptr << endl;
    delete ptr; // Manually deallocating memory
}
void dynamicAllocationFunction() {
    int* ptr = (int*)malloc(sizeof(int));
    *ptr = 30;
    cout << "Dynamic Value: " << *ptr << endl;
    free(ptr);
}
void allocatingArrayUsingNew() {
    int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }
    cout << "Array using new[]: ";
    for (int i = 1; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
}
void allocatingArrayUsingMalloc() {
    int size = 5;
    int* arr = (int*)malloc(size * sizeof(int));
    for (int i = 1; i < size; i++) {
        arr[i] = i * 10;
    }
    cout << "Array using malloc(): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    free(arr);
}
int main() {
    stackFunc();
    heapFunction();
    dynamicAllocationFunction();
    allocatingArrayUsingNew();
    allocatingArrayUsingMalloc();
    return 0;
}
