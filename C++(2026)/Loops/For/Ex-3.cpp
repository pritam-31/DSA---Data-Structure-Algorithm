// Print sum of 1st N-natural numbers.

#include <iostream>
using namespace std;

int main() {
    int i, N;

    cout << "Enter Your N = ";
    cin >> N;

    int sum = 0;

    for (i = 1; i <= N; i++) {
        sum += i; // sum + 1 = sum
    }  
    cout << "Sum = " << sum << endl;
    
    return 0;
}