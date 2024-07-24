#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2000] = {};
    int idx = 1000;

    char pre_c = 'a';

    for (int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if (pre_c != c) {
            arr[idx]++;
            pre_c = c;
        }

        if (c == 'R') {
            for (int j = idx + 1; j <= idx + x; j++) {
                arr[j]++;
            }
            idx += x;
        }
        else {
            for (int j = idx - 1; j >= idx - x; j--) {
                arr[j]++;
            }
            idx -= x;
        }
    }

    int cnt = 0;

    for (int i = 0; i < 1999; i++) {
        if (arr[i] >= 2) {
            if (arr[i+1] >= 2) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}