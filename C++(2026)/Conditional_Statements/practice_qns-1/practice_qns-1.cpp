//Print the largest of 2 numbers.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter Num1: ";
    cin >> num1;
    cout << "Enter Num2: ";
    cin >> num2;

    if(num1 >= num2) {
        cout << "The largest no. is: " << num1 << endl;
    } else {
        cout << "The largest no. is: " << num2 << endl;
    }

    return 0;
}