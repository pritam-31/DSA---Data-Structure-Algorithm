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