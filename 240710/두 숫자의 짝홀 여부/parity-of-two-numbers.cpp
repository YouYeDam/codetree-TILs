#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a % 2 == 0) {
        cout << "even";
    }
    else {
        cout << "odd";
    }
    cout << endl;
    if (b % 2 == 0) {
        cout << "even";
    }
    else {
        cout << "odd";
    }

    return 0;
}