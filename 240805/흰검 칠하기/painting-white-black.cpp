#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[200001] = {};
    int arr_w[200001] = {};
    int arr_b[200001] = {};
    int pos = 100000;

    for (int i = 0; i < n; i++) {
        int x;
        char d;
        cin >> x >> d;

        if (d == 'L') {
            for (int j = pos; j > pos - x; j--) {
                arr_w[j]++;
                if (arr_w[j] >= 2 && arr_b[j] >= 2) {
                    arr[j] = 'G';
                } 
                else {
                    arr[j] = 'W';
                }
            }
            pos = pos - x + 1;
        }
        else {
            for (int j = pos; j < pos + x; j++) {
                arr_b[j]++;
                if (arr_w[j] >= 2 && arr_b[j] >= 2) {
                    arr[j] = 'G';
                } 
                else {
                    arr[j] = 'B';
                }
            }
            pos = pos + x - 1;
        }
    }
    int w_cnt = 0, b_cnt = 0, g_cnt = 0;

    for (int i = 0; i <200001; i++) {
        if (arr[i] == 'W') {
            w_cnt++;
        }
        else if (arr[i] == 'B') {
            b_cnt++;
        }
        else if (arr[i] == 'G') {
            g_cnt++;
        }
    }
    cout << w_cnt << " " << b_cnt << " " << g_cnt;
    return 0;
}