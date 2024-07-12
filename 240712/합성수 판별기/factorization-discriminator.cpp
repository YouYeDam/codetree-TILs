#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool mix = false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            mix = true;
            cout << "C";
            break;
        }
    }
    if (mix == false) {
        cout << "N";
    }
    return 0;
}