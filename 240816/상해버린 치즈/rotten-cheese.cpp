#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, d, s;
    cin >> n >> m >> d >> s;

    int arr_info[1000][3];
    int arr_ill[50][2];

    for (int i = 0; i < d; i++) {
        cin >> arr_info[i][0] >> arr_info[i][1] >> arr_info[i][2];
    }

    for (int i = 0; i < s; i++) {
        cin >> arr_ill[i][0] >> arr_ill[i][1];
    }

    int arr_rot[50] = {};

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < d; j++) {
            if (arr_info[j][0] != arr_ill[i][0]) {
                continue;
            }

            if (arr_info[j][2] <= arr_ill[i][1]) {
                arr_rot[arr_info[j][1]]++;
            }
        }
    }

    int max_val = 0;

    for (int i = 1; i <= 50; i++) {
        if (arr_rot[i] != s) {
            continue;
        }
        int val = 0;

        for (int j = 0; j < d; j++) {
            if (arr_info[j][1] == i) {
                val++;
            }
        }
        max_val = max(max_val, val);
    }
    cout << max_val;

    return 0;
}