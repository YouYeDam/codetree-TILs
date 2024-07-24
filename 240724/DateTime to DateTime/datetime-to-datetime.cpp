#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum1 = (11 * 24 * 60) + (11 * 60) + 11;
    int sum2 = (a * 24 * 60) + (b * 60) + c;

    if (sum1 > sum2) {
        cout << -1;
    }
    else {
        cout << sum2 - sum1;
    }
    return 0;
}