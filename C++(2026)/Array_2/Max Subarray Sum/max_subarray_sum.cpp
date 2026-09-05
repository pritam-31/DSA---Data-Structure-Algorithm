// Brute Force Approach.. 

#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum(int *arr, int sz) {

    int maxSum = INT_MIN; // Initialize maxSum to the smallest possible integer
    for(int start=0; start<sz; start++) {
        for(int end=start; end<sz; end++) {

            int currSum = 0;
            for(int i=start; i<=end; i++) {
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum, currSum); // Update maxSum if currSum is greater
        }
        cout << endl;
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum(arr, n);

    return 0;
}