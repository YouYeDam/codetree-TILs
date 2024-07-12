#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool res = false;
    for (int i = a; i <= b; i++) {
        if (1920 % i == 0 && 2880 % i == 0) {
            res = true;
            cout << 1;
            break;
        }
    }
    if (res == false) {
        cout << 0;
    }
    return 0;
}