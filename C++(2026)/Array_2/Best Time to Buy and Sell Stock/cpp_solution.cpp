#include <iostream>
#include <climits>

using namespace std;

int maxProfit(int *prices, int n) {
    int bestBuy[100000];  // total bestBuy prices length..
    bestBuy[0] = INT_MAX;
    cout << bestBuy[0] << ", ";

    // 1st step: har ek sell-price ke liye, hum uske "bestBuy-price calculated karege"
    for(int i=1; i<n; i++) {  // Time Complexity = O(n)
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
        cout << bestBuy[i] << ", ";
    }
    cout << endl;

    // 2nd step: har kisi "i" ke liye, uska profit nikalenge..(bestBuy ke hisab se profit calculate karne ke)
    int maxProfit = 0;

    for(int i=0; i< n; i++) {   // Time Complexity = O(n)
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    cout << "Max Profit = " << maxProfit << endl;  // Time Complexity = O(n + n) => O(2n) = O(n)
}

int main() {
    int prices[6] = {7, 1, 5, 3, 6, 4};  //if prices decrease hote jayega toh profit = 0 hoga
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);

    return 0;
}