// For a Positive N number, WAP to check N number is Prime or Not.

#include <iostream>
using namespace std;

// int main() {
//     int N = 58;
//     bool prime = true;

//     if (N <= 1)
//         prime = false;

//     for (int i = 2; i <= N / 2; i++) {
//         if (N % i == 0) {
//             prime = false;
//             break;
//         }
//     }

//     if (prime) {
//         cout << "Prime";
//     } else {
//         cout << "Not Prime";
//     }

    //or (using short algorithm)

    int N = 17;
    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0)
            count++;
    }

    if (count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";
   
    return 0;
}
