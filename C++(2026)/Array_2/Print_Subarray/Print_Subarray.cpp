// -> Subarray:- it is continuous_part of an array.

#include <iostream>
using namespace std;

int printSubarrays(int *arr, int sz) {
    for(int start=0; start<sz; start++) {
        for(int end=start; end<sz; end++) {
            cout << "(" << start << "," << end << ")";
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

// output:- 
// (0,0)(0,1)(0,2)(0,3)(0,4)
// (1,1)(1,2)(1,3)(1,4)
// (2,2)(2,3)(2,4)
// (3,3)(3,4)
// (4,4)