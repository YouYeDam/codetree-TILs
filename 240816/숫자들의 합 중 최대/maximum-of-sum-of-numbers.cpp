#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int max_val = 0;

    for (int i = x; i <= y; i++) {
        int a = i / 10000;
        int b = (i % 10000) / 1000;
        int c = (i % 1000) / 100;
        int d = (i % 100) / 10;
        int e = (i % 10);

        int sum = a + b + c + d + e;
        max_val = max(max_val, sum);
    }
    cout << max_val;
    return 0;
}