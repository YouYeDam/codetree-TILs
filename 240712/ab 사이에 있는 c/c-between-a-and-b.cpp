#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool res = false;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            res = true;
            cout << "YES";
            break;
        }
    }

    if (res == false) {
        cout << "NO";
    }
    return 0;
}