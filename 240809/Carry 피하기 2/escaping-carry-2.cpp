#include <iostream>
#include <cmath>
using namespace std;

int arr[20];
bool ToString(int i, int j, int k) {
    string a = to_string(arr[i]);
    string b = to_string(arr[j]);
    string c = to_string(arr[k]);

    int len_a = a.length();
    int len_b = b.length();
    int len_c = c.length();

    for (int i = 0; i < 5 - len_a; i++) {
        a = '0' + a;
    }
    for (int i = 0; i < 5 - len_b; i++) {
        b = '0' + b;
    }
    for (int i = 0; i < 5 - len_c; i++) {
        c = '0' + c;
    }

    for (int i = 0; i < 5; i++) {
        int carry = a[i] + b[i] + c[i] - 3 * '0';
        if (carry > 9) {
            return true;
            break;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = -1;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                bool IsCarry = ToString(i, j, k);
                int sum = -1;
                if (!IsCarry) {
                    sum = arr[i] + arr[j] + arr[k];
                }
                if (sum > max_val) {
                    max_val = sum;
                }
            }
        }
    }
    cout << max_val;
    return 0;
}