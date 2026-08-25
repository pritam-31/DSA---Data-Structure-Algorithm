// arrays are passed by reference

#include <iostream>
using namespace std;

void fnx(int arr[]) {
    arr[0] = 100;
}

int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(array) / sizeof(array[0]);

    cout << array[0] << endl; 
    fnx(array);
    cout << array[0] << endl; 

    return 0;
}