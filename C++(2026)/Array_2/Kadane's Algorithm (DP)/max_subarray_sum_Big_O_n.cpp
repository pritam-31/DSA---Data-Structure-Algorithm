// Kadane's Algorithm to find the maximum subarray sum
// Big O(n) time complexity, O(1) space complexity

#include <iostream>
#include <climits>
using namespace std;

void maxSubarraySum3(int *arr, int sz) {
    int maxSum = INT_MIN; // Initialize maxSum to the smallest possible integer
    int currSum = 0; // Initialize currSum to 0

    for(int i=0; i< sz; i++) {
        currSum += arr[i]; // Add the ek ek element to currSum
        maxSum = max(currSum, maxSum); // Update maxSum if currSum is greater

        if(currSum < 0) {
            currSum = 0; // Reset currSum to 0 if it becomes negative
        }
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum3(arr, n);

    return 0;
}