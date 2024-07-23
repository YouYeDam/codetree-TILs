#include <iostream>
using namespace std;

int GetNumber(int n) {
    if (n == 1) {
        return 2;
    }
    else if (n == 2) {
        return 4;
    }
    return (GetNumber(n - 2) * GetNumber(n - 1)) % 100;
}

int main() {
    int n;
    cin >> n;
    cout << GetNumber(n);
    return 0;
}