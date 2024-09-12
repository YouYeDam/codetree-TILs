#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int x_min = INT_MAX;
    int x_max = INT_MIN;
    int y_min = INT_MAX;
    int y_max = INT_MIN;

    for (int i = 0; i < 8; i++) {
        int n;
        cin >> n;

        if (i % 2 == 0) {
            x_max = max(x_max, n);
            x_min = min(x_min, n);
        }
        else {
            y_max = max(y_max, n);
            y_min = min(y_min, n);
        }
    }

    cout << (x_max - x_min) * (y_max - y_min);
    return 0;
}