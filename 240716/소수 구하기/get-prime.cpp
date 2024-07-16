#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool IsDecimal = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                IsDecimal = false;
                break;
            }
        }
        if (IsDecimal) {
            cout << i << " ";
        }
    }
    return 0;
}