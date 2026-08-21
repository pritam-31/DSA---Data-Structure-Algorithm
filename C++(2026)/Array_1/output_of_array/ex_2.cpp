// Output of the Array way 2

#include <iostream>
using namespace std;

int main() {
    int arr[50] = {6, 2, 3, 8, 5};
    int n = sizeof(arr) / sizeof(int); // Length/ Size of Array

    for (int i=0; i < n; i++) {
        cout << arr[i] << " "; // Output of Array
    }
    cout << endl;

    return 0;
}


// o/p- 6 2 3 8 5 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 00 0 0 0 0 0 0 0 0 0 0 