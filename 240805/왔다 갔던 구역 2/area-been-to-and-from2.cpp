#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[2001] = {};
    int pos = 1000;
    for (int i = 0; i < n; i++) {
        int x;
        char d;
        cin >> x >> d;
        if (d == 'L') {
            for (int j = pos-1; j >= pos-x; j--) {
                arr[j]++;
            }
            pos -= x;
        }
        else {
            for (int j = pos; j < pos+x; j++) {
                arr[j]++;
            }
            pos += x;
        }
    }
    int cnt = 0;
    for (int i = 0; i < 2000; i++) {
        if (arr[i] >= 2) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}