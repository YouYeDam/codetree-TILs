#include <iostream>
using namespace std;

int sum = 0;

void GetSum(int n) {
    if (n == 0) {
        return;
    }
    GetSum(n - 1);
    sum += n;
}

int main() {
    int n;
    cin >> n;
    GetSum(n);
    cout << sum;
    return 0;
}