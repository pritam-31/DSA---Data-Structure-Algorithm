#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int sizeOfArr = sizeof(arr)/sizeof(int);
    
    int start = 0;
    int end = (sizeOfArr - 1);

    while(start < end) {
        // swap
        int temp = arr[start]; // temp = a;
        arr[start] = arr[end]; // a = b;
        arr[end] = temp; // b = temp;

        start++;
        end--;
    }

    printArr(arr, sizeOfArr);

    return 0;
}

// O/p:- 2 9 3 4 5