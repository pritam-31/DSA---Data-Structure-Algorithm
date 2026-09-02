// 1. Incrementing a pointer variable & Decrementing a pointer variable

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;

    cout << aptr <<  endl;
    aptr++;
    cout << aptr << endl;
    aptr--;
    cout << aptr << endl;

    return 0;
}

//output: 
// 0x61ff08
// 0x61ff0c
// 0x61ff08