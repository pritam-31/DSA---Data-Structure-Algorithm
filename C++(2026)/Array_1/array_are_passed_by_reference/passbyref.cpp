// what will be the output of the following code?

#include <iostream> 
using namespace std;

void printArray(int nums[], int n) {   // yeh sahi hai, (int n -> size of array)

    // int n = sizeof(nums) / sizeof(int); yeh galat hai

    for (int i = 0; i < n; i++) {
        cout << nums[i] << ", ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    cout << "Size of array: " << n << endl;

    printArray(arr, n);

    return 0;
}
