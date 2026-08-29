//  Method - 1: with extra space (time complexity)

#include <iostream>
using namespace std;

void printArr(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int sizeOfArr = sizeof(arr)/sizeof(int);
    
    int copyArr[sizeOfArr]; // org array ka copy bana denge..

    for(int i=0; i<sizeOfArr; i++) {
        int j = (sizeOfArr-i)-1;
        copyArr[j] = arr[i];
    }

    for(int i=0; i<sizeOfArr; i++) {
        arr[i] = copyArr[i];
    }

    printArr(arr, sizeOfArr);

    return 0;
}

// O/p:- 50 40 30 20 10