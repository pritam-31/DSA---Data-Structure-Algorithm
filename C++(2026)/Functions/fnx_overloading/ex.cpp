#include <iostream> 
using namespace std;

int sum(int a, int b) {
    int s = (a + b);
    cout << s << endl;
    return s;
}

double sum(double a, double b) {
    int s = (a + b);
    cout << s << endl;
    return s;
}

int main() {
    sum(4, 7);
    sum(1, 9);
    sum(1.2, 4.6);

    return 0;
}