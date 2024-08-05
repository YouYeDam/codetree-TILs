#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2000] = {};

    int pos = 1000;
    for (int i = 0; i < n; i++) {
        int x;
        char d;

        cin >> x >> d;

        if (d == 'R') {
            for (int j = pos; j < pos + x; j++) {
                arr[j]++;
            }
            pos += x;
        }
        else {
            for (int j = pos; j > pos - x; j--) {
                arr[j]++;
            }
            pos -= x;
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