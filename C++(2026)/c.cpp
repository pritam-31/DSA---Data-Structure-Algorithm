// what will be the output of the following code?

#include <iostream> 
using namespace std;

void printArray(int nums[], int n) {   // yeh sahi hai, (int n -> size of array)

    // int n = sizeof(nums) / sizeof(nums[0]); yeh galat hai

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    return 0;
}
