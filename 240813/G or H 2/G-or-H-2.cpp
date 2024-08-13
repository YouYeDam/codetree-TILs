#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[101] = {};

    for (int i = 0; i < n; i++) {
        int pos;
        char alp;
        cin >> pos >> alp;

        arr[pos] = alp;
    }

    int max_val = 0;

    for (int i = 0; i <= 100; i++) {
        if (arr[i] != 'G' && arr[i] != 'H') {
            continue;
        }
        for (int j = i; j <= 100; j++) {
            if (arr[j] == '\0') {
                continue;
            }
            int val = 0;
            int g_cnt = 0;
            int h_cnt = 0;

            for (int k = i; k <= j; k++) {
                if (arr[k] == 'G') {
                    g_cnt++;
                }
                else if (arr[k] == 'H') {
                    h_cnt++;
                }
            }

            if (g_cnt == 0 || h_cnt == 0 || g_cnt == h_cnt) {
                val = j - i;
            }
            if (val > max_val) {
                max_val = val;
            }
        }
    }
    cout << max_val;
    return 0;
}