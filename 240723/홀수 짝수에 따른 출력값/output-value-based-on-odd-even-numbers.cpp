#include <iostream>
using namespace std;

int GetSum(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    return n + GetSum(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << GetSum(n);
    return 0;
}