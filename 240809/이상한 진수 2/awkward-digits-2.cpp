#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    string max_val;
    int res;
    int len = a.length();

    bool IsExistZero = false;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '0') {
            IsExistZero = true;
            break;
        }
    }

    if (IsExistZero) {
        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '0') {
                a[i] = '1';
                max_val = a;
                break;
            }
        }
    }
    else {
        a[len - 1] = '0';
        max_val = a;
    }
    
    int n = 0;
    int prod = 1;
    for (int i = max_val.length() - 1; i >= 0; i--) {
        n += prod * (max_val[i] - '0');
        prod *= 2;
    }
    cout << n;
    return 0;
}