// Qn:-1] WAP to find the Factorial of a number entered by the user.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter Number : ";
    cin >> n;

    //int factorial = 1; // init by 1
    long long factorial = 1; // init by 1  

    for(int i = 1; i <= n; i++) {
        //factorial *= i;
        factorial = factorial * i;
    }
    cout << "Factorial = " << factorial << endl;

    return 0;
}