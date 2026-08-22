// Input of the Array way 2

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int n = sizeof(arr) / sizeof(int); // Length/ Size of Array

    for (int i=0; i < n; i++) {
        cin >> arr[i]; // Input of Array
    }

    for (int i=0; i < n; i++) {
        cout << arr[i] << ", "; // Output of Array
    }
    cout << endl;

    return 0;
}


// o/p- 
// 1
// 5
// 8
// 6
// 7

//--> 1, 5, 8, 6, 7,