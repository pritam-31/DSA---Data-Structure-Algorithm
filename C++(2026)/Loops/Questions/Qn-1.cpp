// Print n to 1 numbers using Loop.

#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter n = ";
    cin >> n;

    for (i = n; i >= 1; i--) {
        cout << i << endl;
    }

    return 0;
}