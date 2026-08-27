#include <iostream>
using namespace std;

int Linear_Search(int *arr, int n, int key) {
    for(int i=0; i<n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}


int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 40;

    int res = Linear_Search(arr, n, key);
    cout << "Element found at index: " << res << endl;

    return 0;
}

// o/p:- Element found at index: 3