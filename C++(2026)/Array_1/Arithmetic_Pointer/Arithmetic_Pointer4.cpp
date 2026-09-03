// comparison of pointer and array

#include <iostream>
using namespace std;

int main() {
    // int a = 5;

    // in Array->
    int arr[20] = {1, 2, 3, 4, 5, 6};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout << *ptr1 << "\n"; // 1
    cout << *ptr2 << "\n"; // 4

    cout << (ptr2 < ptr1) << endl; // 0
    cout << (ptr2 > ptr1) << endl; // 1
    cout << (ptr1 == arr) << endl;
    return 0;
}