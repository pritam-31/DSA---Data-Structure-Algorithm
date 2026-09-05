// Brute Force Approach.. 

#include <iostream>
using namespace std;

void maxSubarraySum(int *arr, int sz) {
    for(int start=0; start<sz; start++) {
        for(int end=start; end<sz; end++) {

            int currSum = 0;
            for(int i=start; i<end; i++) {
                //cout << arr[i] << endl;
                currSum += arr[i];
            }
            cout << currSum << ",";
        }
        cout << endl;
    }
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum(arr, n);

    return 0;
}