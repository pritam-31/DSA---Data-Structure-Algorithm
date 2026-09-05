#include <iostream>
using namespace std;

void printSubarrays(int *arr, int sz) {
    for (int start = 0; start < sz; start++) {
        for (int end = start; end < sz; end++) {

            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }

            cout << endl;   // har subarray ke baad new line
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sz = 5;

    printSubarrays(arr, sz);

    return 0;
}

Output:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
2
2 3
2 3 4
2 3 4 5
3
3 4
3 4 5
4
4 5
5

Ek aur chhota correction: tumne function ko "int" banaya tha, lekin function kuch return nahi kar raha. Isliye maine "int" ki jagah "void" kar diya.