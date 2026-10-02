// Trapping Rain-water [ Leetcode - 42 no. pbm ]

#include <iostream>

using namespace std;

int trap(int *heights, int n) {
    int leftMax[20000], rightMax[20000];

    leftMax[0] = heights[0]; // -ve infinity
    cout << leftMax[0] << ", "; // -2147483648

    // 1st Loop
    cout << "left Max => " << "";
    for(int i=1; i<n; i++) {
        leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
        cout << leftMax[i] << ", ";
    }
    cout << endl;

    rightMax[n-1] = heights[n-1]; // -ve infinity
    cout << rightMax[n-1] << ", "; // -2147483648

    // 2nd Loop
    cout << "Right Max => " << "";
    for(int i=(n-2); i>=0; i--) {
        rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
        cout << rightMax[i] << ", ";
    }
    cout << endl;

    // 3rd Loop
    int waterTrapped = 0;
    for(int i=0; i<n; i++) {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];

        if(currWater > 0) {
            waterTrapped += currWater;
        }
    }

    cout << "Water Trapped = " << waterTrapped << endl;
    return waterTrapped;
}

int main() {
    int heights[8] = {4, 2, 0, 6, 3, 0, 2, 5};
    int n = sizeof(heights) / sizeof(int);

    trap(heights, n);

    return 0;
}