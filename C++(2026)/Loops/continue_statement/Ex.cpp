#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 3) {
            continue;
        }
        cout << i << endl;
    } 
    return 0;
}

// o/p:- 
// 1 
// 2
// 4
// 5
// 6
// 7
// 8
// 9
// 10