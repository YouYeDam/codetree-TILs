#include <iostream>
using namespace std;

int GetNumber(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }

    return GetNumber(n / 3) + GetNumber(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << GetNumber(n);
    return 0;
}