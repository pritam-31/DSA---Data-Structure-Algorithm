#include <iostream>
using namespace std;

int main() {

int marks[] = {1, 2, 3, 4, 5};
int length = sizeof(marks) / sizeof(int);
cout << sizeof(marks) << endl; // 20
cout << length << endl;        // 5

return 0;
}