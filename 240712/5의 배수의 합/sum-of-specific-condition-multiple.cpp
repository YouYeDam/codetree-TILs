#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;

    if (a >= b) {
        for (int i = b; i <= a; i++) {
            if (i % 5 == 0) {
                sum += i;
            }
        }
    }
    else {
        for (int i = a; i <= b; i++) {
            if (i % 5 == 0) {
                sum += i;
            }
        }
    }
    cout << sum;
    return 0;
}