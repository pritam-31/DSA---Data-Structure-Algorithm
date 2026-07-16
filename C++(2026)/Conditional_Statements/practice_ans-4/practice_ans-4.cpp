//Print the Largest of 3 numbers...

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter 1st Num: ";
    cin >> a;
    cout << "Enter 2nd Num: ";
    cin >> b;
    cout << "Enter 3rd Num: ";
    cin >> c;

    if(a >= b && a >= c) {
        cout << a << "<- This is the Largest no." << endl;
    } else if(b >= c) {
        cout << b << "<- This is the Largest no." << endl;
    } else {
        cout << c << "<- This is the Largest no." << endl;
    }

    return 0;
}