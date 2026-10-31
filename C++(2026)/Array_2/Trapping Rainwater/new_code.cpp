// Trapping Rain-water [Leetcode - 42]

#include <iostream>
#include <algorithm>

using namespace std;

int trap(int *heights, int n) {
    int leftMax[20000], rightMax[20000];

    // Left Max
    leftMax[0] = heights[0];

    cout << "left Max => ";
    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i - 1], heights[i]);
        cout << leftMax[i] << ", ";
    }
    cout << endl;


    // Right Max
    rightMax[n - 1] = heights[n - 1];

    cout << "Right Max => ";
    for(int i =(n-2); i>=0; i--) {
        rightMax[i] = max(rightMax[i + 1], heights[i]);
    }

    // Print in left-to-right order
    for(int i = 0; i < n; i++) {
        cout << rightMax[i] << ", ";
    }
    cout << endl;


    // Current Water
    int waterTrapped = 0;

    cout << "Current Water => ";
    for(int i = 0; i < n; i++) {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];

        if(currWater < 0) {
            currWater = 0;
        }
        cout << currWater << ", ";
        waterTrapped += currWater;
    }
    cout << endl;

    cout << "Water Trapped = " << waterTrapped << endl;
    return waterTrapped;
}


int main() {
    int heights[8] = {4, 2, 0, 6, 3, 0, 2, 5};
    int n = sizeof(heights) / sizeof(int);

    trap(heights, n);

    return 0;
}