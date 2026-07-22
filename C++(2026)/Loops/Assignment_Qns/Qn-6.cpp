// For a +ve N, WAP that prints the first N Fibonacci numbers.

#include <iostream>
using namespace std;

int main() {
    int N, first, sec, third;
    cout << "Enter N: ";
    cin >> N;
    
    first = 0;
    sec = 1;

    for(int i = 2; i < N; i++) {
        third = first + sec;

        cout << third << endl;

        first = sec;
        sec = third;
    } 

    return 0;
}