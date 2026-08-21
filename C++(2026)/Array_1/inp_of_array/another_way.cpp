// Input of the Array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    int arr[n];

    for (int i=0; i < n; i++) {
        cin >> arr[i]; // Input of Array
    }

    for (int i=0; i < n; i++) {
        cout << arr[i] << ", "; // Output of Array
    }
    cout << endl;

    return 0;
}


