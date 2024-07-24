#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    string n;
    cin >> a >> b >> n;

    int binary[10];
    
    for (int i = 0; i < n.length(); i++) {
        binary[i] = n[i] - '0';
    }

    int num = 0;
    for (int i = 0; i < n.length(); i++) {
        num = num * a + binary[i];
    }
    
    int digits[1000] = {};
    int cnt = 0;

    while (true) {
        if (num < b) {
            digits[cnt] = num;
            cnt++;
            break;
        }
        digits[cnt] = num % b;
        cnt++;
        num /= b;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}