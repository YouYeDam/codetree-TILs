#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 5;
    int tmp;

    tmp = a;
    a = b;
    b = tmp;

    cout << a << endl << b;
    return 0;
}