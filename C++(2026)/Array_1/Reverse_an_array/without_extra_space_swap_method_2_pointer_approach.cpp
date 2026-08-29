// Method - 1: without extra space (time complexity)/ Swap method (2 pointer approach)

#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz) {  // arr[] => *arr
    int start = 0; // starting index
    int end = (sz - 1); // ending index

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int sz = sizeof(arr)/sizeof(int);

    reverseArray(arr, sz);

    for(int i=0; i<sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// O/p:- 50 40 30 20 10