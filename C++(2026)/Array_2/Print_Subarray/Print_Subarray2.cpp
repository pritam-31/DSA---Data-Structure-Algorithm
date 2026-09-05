#include <iostream>
using namespace std;

void printSubarrays(int *arr, int sz) {
    for (int start = 0; start < sz; start++) {
        for (int end = start; end < sz; end++) {

            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sz = 5;

    printSubarrays(arr, sz);

    return 0;
}