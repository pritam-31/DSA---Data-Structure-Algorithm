// Input of the Array

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int len = sizeof(arr) / sizeof(int); // Length/ Size of Array

    for (int idx=0; idx <= (len - 1); idx++) {
        cin >> arr[idx]; // Input of Array
    }

    for (int idx=0; idx <= (len - 1); idx++) {
        cout << arr[idx] << ","; // Output of Array
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

//--> 1,5,8,6,7,