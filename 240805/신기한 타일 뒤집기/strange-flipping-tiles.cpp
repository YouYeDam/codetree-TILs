#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[200001] = {};
    int pos = 100000;

    for (int i = 0; i < n; i++) {
        int x;
        char d;
        cin >> x >> d;

        if (d == 'L') {
            for (int j = pos; j > pos - x; j--) {
                arr[j] = 'W';
            }
            pos = pos - x + 1;
        }
        else {
            for (int j = pos; j < pos + x; j++) {
                arr[j] = 'B';
            }
            pos = pos + x - 1;
        }
    }
    int w_cnt = 0;
    int b_cnt = 0;

    for (int i = 0; i < 200001; i++) {
        if (arr[i] == 'W') {
            w_cnt++;
        }
        else if (arr[i] == 'B') {
            b_cnt++;
        }
    }
    cout << w_cnt << " " << b_cnt;
    return 0;
}