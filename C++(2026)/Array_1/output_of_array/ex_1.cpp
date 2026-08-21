// Output of the Array

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {6, 2, 3, 8, 5};
    int len = sizeof(arr) / sizeof(int); // Length/ Size of Array

    for (int idx=0; idx <= (len - 1); idx++) {
        cout << arr[idx] << " "; // Output of Array
    }
    cout << endl;

    return 0;
}


// o/p- 6 2 3 8 5