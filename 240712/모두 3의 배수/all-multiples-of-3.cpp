#include <iostream>
using namespace std;

int main() {
    bool res = false;

    for (int i = 0; i < 5; i++) {
        int x;
        cin >> x;
        if (x % 3 != 0) {
            res = true;
            cout << 0;
            break;
        }

    }
    if (res == false) {
        cout << 1;
    }
    return 0;
}