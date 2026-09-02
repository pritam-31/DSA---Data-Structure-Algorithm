// Array Pointer acts as a pointer to the first element of the array. It can be used to access and manipulate the elements of the array using pointer arithmetic.
// Array pointer acts like a constant pointer, meaning that it always points to the first element of the array and cannot be changed to point to another location in memory. 

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << arr < "\n";

    int y = 25;
    arr = &y; // This will give an error because arr is a constant pointer and cannot be assigned to point to another location in memory.
}