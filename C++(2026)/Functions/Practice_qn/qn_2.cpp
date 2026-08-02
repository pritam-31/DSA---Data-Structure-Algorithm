// WAP to print if a no. is odd or even

// #include <iostream> 
// using namespace std;

// void check() {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     if(n % 2 == 0) {
//         cout << "Even";
//     } else {
//         cout << "Odd";
//     }

// }

// int main() {

//     check();

//     return 0;
// }

// OR

#include <iostream> 
using namespace std;

void check(int n) {
    if(n % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    check(n); // passing n as parameter..

    return 0;
}