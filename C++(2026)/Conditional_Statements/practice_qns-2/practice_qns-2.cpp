// Print if a no. is Odd or Even.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter Num: ";
    cin >> num;

    if(num % 2 == 0) {
        cout << num << " <-- This is Even no." << endl;
    } else {
        cout << num << " <-- This is Odd no." << endl;
    }

    return 0;
}