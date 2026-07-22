// For a Positive N number, WAP to print 1 to N all Prime.

#include <iostream>
using namespace std;

int main() {
    int N = 17;
    
    for(int i = 2; i <= N; i++) {

        int curr = i; //for current number to check
        int isPrime = true; // assume; that number is Prime

        for(int j = 2; (j * j) <= i; j++) {
            
            if(curr % j == 0) {
                isPrime = false;
            }
        }

        if(isPrime) {
            cout << curr << endl;
        }
    }

    return 0;
}

//or 

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 2; i <= N; i++) {

        bool isPrime = true; //Assume

        for(int j = i; (j * j) <= i; j++) {
            if(j % i == 0) {
                isPrime = false;
                break; // divisor mil gya toh aage check ki zarurat nhi hai
            }
        }

        if(isPrime) {
            cout << i << endl;
        }
    }
    return 0;
}