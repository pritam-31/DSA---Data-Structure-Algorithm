#include <iostream> 
using namespace std;

int main() {
    int n, i;

    cout << "Enter Number = ";
    cin >> n; 
    
    bool isPrime = true;

    for( i = 2; i <= (n-1); i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << "Number is Prime" << endl;
    } else {
        cout << "Number is NOT Prime" << endl;
    }

    return 0;
}