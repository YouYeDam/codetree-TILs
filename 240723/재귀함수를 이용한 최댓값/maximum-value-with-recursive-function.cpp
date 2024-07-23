#include <iostream>
using namespace std;

int GetMaxValue(int n) {
    if (n == 0) {
        return 0;
    }
    int x;
    cin >> x;
    return max(x, GetMaxValue(n - 1));
}

int main() {
    int n;
    cin >> n;
    cout << GetMaxValue(n);
    return 0;
}