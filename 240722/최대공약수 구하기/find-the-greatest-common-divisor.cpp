#include <iostream>
using namespace std;

void MaxDivide(int n, int m) {
    int max_val = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && m % i == 0) {
            if (i > max_val) {
                max_val = i;
            }
        }
    }
    cout << max_val;
}

int main() {
    int n, m;
    cin >> n >> m;
    MaxDivide(n, m);
    return 0;
}