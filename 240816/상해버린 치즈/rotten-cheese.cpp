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

    arr_info[1][1] = 1; arr_info[1][2] = 3; 

    for (int i = 0; i < s; i++) {
        cin >> arr_ill[i][0] >> arr_ill[i][1];
    }

    int arr_rot[51][2] = {};

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < d; j++) {
            if (arr_info[j][0] != arr_ill[i][0]) {
                continue;
            }

            if (arr_info[j][2] < arr_ill[i][1]) {
                if (arr_rot[arr_info[j][1]][1] == 0) {
                    arr_rot[arr_info[j][1]][0]++;
                    arr_rot[arr_info[j][1]][1] = 1;
                }
            }
        }
        for (int i = 1; i <= 50; i++) {
            arr_rot[i][1] = 0;
        }
    }

    int max_val = 0;

    for (int i = 1; i <= 50; i++) {
        if (arr_rot[i][0] != s) {
            continue;
        }
        int val = 0;
        int arr_eat[51][51] = {};

        for (int j = 0; j < d; j++) {
            if (arr_info[j][1] == i && arr_eat[arr_info[j][0]][i] == 0) {
                val++;
                arr_eat[arr_info[j][0]][i] = 1;
            }
        }
        max_val = max(max_val, val);
    }

    cout << max_val;

    return 0;
}