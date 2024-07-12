#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool res = false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            res = true;
            cout << "C";
            break;
        }
    }
    if (res == false) {
        cout << "P";
    }
    return 0;
}