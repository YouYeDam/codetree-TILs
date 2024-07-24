#include <iostream>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int digits[1000] = {};
    int cnt = 0;

    while (true) {
        if (n < b) {
            digits[cnt] = n;
            cnt++;
            break;
        }
        digits[cnt] = n % b;
        cnt++;
        n /= b;
    }
    
    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}