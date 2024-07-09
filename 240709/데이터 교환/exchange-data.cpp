#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    int tmp1 = b, tmp2 = c;

    b = a;
    c = tmp1;
    a = tmp2;

    cout << a << endl << b << endl << c;
    return 0;
}