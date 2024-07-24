#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int binary[10];

    for (int i = 0; i < n.length(); i++) {
        binary[i] = n[i] - '0';
    }

    int num = 0;
    for (int i = 0; i < n.length(); i++) {
        num = num * 2 + binary[i];
    }
    num *= 17;

    int digits[1000] = {};

    int cnt = 0;
    while (true) {
        if (num < 2) {
            digits[cnt] = num;
            cnt++;
            break;
        }
        digits[cnt] = num % 2;
        cnt++;
        num /= 2;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}