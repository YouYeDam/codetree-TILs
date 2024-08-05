#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2001] = {};
    int pos = 1000;
    char prev_d = 'N';


    for (int i = 0; i < n; i++) {
        int x;
        char d;
        cin >> x >> d;

        if (d == prev_d) {
            if (d == 'R') {
                for (int j = pos + 1; j <= pos + x; j++) {
                    arr[j]++;
                }
            pos += x;
            }

            else {
                for (int j = pos - 1; j >= pos - x; j--) {
                    arr[j]++;
                }
                pos -= x;
            }
        }
        else {
            if (d == 'R') {
                for (int j = pos; j <= pos + x; j++) {
                    arr[j]++;
                }
                pos += x;
            }
            else {
                for (int j = pos; j >= pos - x; j--) {
                    arr[j]++;
                }
                pos -= x;
            }
        }
        prev_d = d;
    }

    int cnt = 0;
    for (int i = 0; i < 2001; i++) {
        if (arr[i] >= 2) {
            for (int j = 1; j < 2001 - i; j++) {
                if (arr[i+j] >= 2) {
                    cnt++;
                }
                else {
                    i += j;
                    break;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}