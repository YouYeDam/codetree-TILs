#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arr[10] = {};

    while (a > 1) {
        a /= b;
        arr[a % b]++;
    }
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += arr[i] * arr[i];
    }
    cout << sum;
    return 0;
}