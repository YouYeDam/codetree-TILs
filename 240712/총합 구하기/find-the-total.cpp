#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;

    for (int i = a; i <= b; i++) {
        if (i % 6 == 0 && i % 8 != 0) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}