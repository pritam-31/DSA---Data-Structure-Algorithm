#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << "a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    cout << "ptr = " << ptr << endl;
    cout << "Address of ptr = " << &ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "Address of *ptr = " << &(*ptr) << endl;
    
    return 0;
}