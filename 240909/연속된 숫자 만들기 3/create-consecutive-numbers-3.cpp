#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b - 1 && b == c - 1) {
        cout << 0;
    }
    else {
        int max_diff = max(b - a, c - b);
        cout << max_diff - 1;
    }
    return 0;
}