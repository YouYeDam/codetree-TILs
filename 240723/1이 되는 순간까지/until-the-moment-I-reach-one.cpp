#include <iostream>
using namespace std;

int cnt = 0;

int GetCount(int n) {
    if (n == 1) {
        return cnt;
    }
    cnt++;
    if (n % 2 == 0) {
        return GetCount(n / 2);
    }
    else {
        return GetCount(n / 3);
    }
}

int main() {
    int n;
    cin >> n;
    cout << GetCount(n);
    return 0;
}