#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;

    cout << aptr <<  endl;
    aptr++;
    cout << aptr << endl;

    return 0;
}

//output: 
// 0x61ff08
// 0x61ff0c