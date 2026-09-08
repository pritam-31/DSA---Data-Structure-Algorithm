// Slightly optimized approach to find the maximum subarray sum
// Big O(n^2) time complexity, O(1) space complexity

#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum2(int *arr, int sz) {
    int maxSum = INT_MIN; // Initialize maxSum to the smallest possible integer
    for(int start=0; start<sz; start++) {

        int currSum = 0;
        for(int end=start; end<sz; end++) {
            currSum += arr[end]; // Add the current element to currSum
            maxSum = max(maxSum, currSum); // Update maxSum if currSum is greater
        }
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum2(arr, n);

    return 0;
}