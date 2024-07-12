#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);

    float avg = (float)sum / cnt;
    cout << sum << " " << avg;
    return 0;
}