#include <iostream>
using namespace std;

int GetCount(int n) {
    if (n == 1) {
        return 0;
    }
    if (n % 2 == 0) {
        return GetCount(n / 2) + 1;
    }
    else {
        return GetCount(n*3 + 1) + 1;
    }
}

int main() {
    int n;
    cin >> n;
    cout << GetCount(n);
    return 0;
}