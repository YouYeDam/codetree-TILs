#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max_val = 0;

    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            if ((a * i) + (b * j) <= c) {
                max_val = max(max_val, (a * i) + (b * j));
            }
        }
    }
    cout << max_val;
    return 0;
}