#include <iostream>
using namespace std;

int GetSum(int n) {
    if (n < 10) {
        return n;
    }
    return GetSum(n / 10) + n % 10;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int n = a * b * c;

    cout << GetSum(n);
    return 0;
}