// Print Star pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Outer loop:- for calculate no. of rows[1 to n], how many times print that 
    for(int i = 1; i <= n; i++) {
        
        //Inner loop:- for calculte no of elements [1 to i], how many times print that 
        for(int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}