#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1; i <= m1; i++) {
        sum1 += day[i - 1];
    }
    sum1 += d1;

    for (int i = 1; i <= m2; i++) {
        sum2 += day[i - 1];
    }
    sum2 += d2;

    cout << sum2 - sum1 + 1;
    return 0;
}