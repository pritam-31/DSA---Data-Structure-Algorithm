// Qn:-2] WAP to print the multiplication table of a number,entered by the user.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number = ";
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout << (n * i) << endl;  
    }
    
    return 0;
}