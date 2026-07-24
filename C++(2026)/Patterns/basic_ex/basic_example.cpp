#include <iostream>
using namespace std;

int main() {
    //outer loop
    for(int i = 1; i <= 6; i++) {
        int val = i;
        //inner loop
        for(int j = 1; j <= 10; j++) {
            cout << val << ' ';
        }
        cout << endl;
    }

    return 0;
}