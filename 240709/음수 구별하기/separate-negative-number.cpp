#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a < 0) {
        cout << a << endl << "minus";
    }
    else {
        cout << a;
    }
    return 0;
}