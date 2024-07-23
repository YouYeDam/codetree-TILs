#include <iostream>
using namespace std;

int GetSquareSum(int n) {
    if (n < 10) {
        return n * n;
    }
    return GetSquareSum(n / 10) + (n % 10) * (n % 10);
}

int main() {
    int n;
    cin >> n;
    cout << GetSquareSum(n);
    return 0;
}