#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void maxProfit(int *prices, int n) {

    int bestBuy[100000];

    bestBuy[0] = INT_MAX;

    for(int i = 1; i < n; i++) {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }

    int maxProfits = 0;

    for(int i = 0; i < n; i++) {
        int currProfit = prices[i] - bestBuy[i];

        maxProfits = max(maxProfits, currProfit);
    }

    cout << "Max Profit = " << maxProfits << endl;
}

int main() {

    int prices[5] = {7, 1, 5, 3, 4};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);

    return 0;
}

// Max Profit = 4