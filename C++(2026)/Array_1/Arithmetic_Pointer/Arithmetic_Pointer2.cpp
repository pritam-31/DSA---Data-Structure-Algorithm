// 2. Addition and Subtraction of Pointer and Array Pointer

#include <iostream>
using namespace std;

// int main() {
//     int a = 5;
//     int *ptr = &a;

//     cout << ptr << "\n";
//     cout << (ptr + 3) << endl;
//     ptr = ptr + 3;

//     cout << (ptr - 3) << endl;

//     return 0;
// }

// In Array:-
void printArr(int *ptr, int n) {
    for(int i=0; i<n; i++) {
        cout << *(ptr + i) << "\n";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    printArr(arr, n);

    return 0;
}

// o/p:-
// 1
// 2
// 3
// 4
// 5