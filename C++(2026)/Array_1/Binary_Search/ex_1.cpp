// Binary Search 

#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key) {
    int st = 0;
    int end = n-1;

    while(st <= end) {
        int mid = (st + end) / 2;  // find mid

        if(arr[mid] == key) {   // key found
            return mid;
        } else if(arr[mid] < key) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // key not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int sz = sizeof(arr)/sizeof(int);
    int key = 12;

    cout << binarySearch(arr, sz, key) << endl;

    return 0;
}