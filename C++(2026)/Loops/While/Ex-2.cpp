// Print sum of 1st N-natural numbers.

#include <iostream>
using namespace std;

int main() {
    int N, i = 1;

    cout << "Enter num = ";
    cin >> N;

    int sum = 0;

    while (i <= N) {
        sum = sum + i;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}