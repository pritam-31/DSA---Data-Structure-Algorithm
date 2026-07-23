//check no is Armstrrong or not

#include <iostream>
using namespace std;

int main() {
    int n = 371;
    int num = n;
    int cubeSum = 0;

    while(num > 0) {
        int lastDig = num % 10;
        cubeSum = cubeSum + (lastDig * lastDig * lastDig);
        num = num / 10;
    }

    if(n == cubeSum) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "NOT an Armstrong number" << endl;
    }

    return 0;
}

or

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, num, digit, count = 0;
    int sum = 0;

    cout << "Enter n: ";
    cin >> n;

    //count digits
    for(num = n; num > 0; num /= 10) {
        count++;
    }

    //calculate sum of digit raised to count
    for (num = n; num > 0; num /= 10) {
        digit = num % 10;
        sum = sum + pow(digit, count);
    }

    if(sum == num) {
        cout << n << " is an Armstrong no.";
    } else {
        cout << n << " is not an Armstrong no.";
    }

    return 0;
}