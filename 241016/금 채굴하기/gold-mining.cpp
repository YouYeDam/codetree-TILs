#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[20][20] = {};

    int total_price = 0;
    int max_gold_cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                total_price += m;
                max_gold_cnt = 1;
            }
        }
    }

    int k = 1;

    while (true) {
        int cost = k * k + (k + 1) * (k + 1);

        if (cost > total_price) {
            break;
        }

        for (int i = 0; i < n; i++) { // 마름모 정중앙 인덱스
            for (int j = 0; j < n; j++) {
                int gold_cnt = 0;

                int init = 0;
                bool reverse = false;

                for (int x = i - k; x <= i + k; x++) {
                    if (init == k ) {
                        reverse = true;
                    }

                    for (int y = j - init; y <= j + init; y++) {
                        if (x < 0 || x >= n || y < 0 || y >= n) {
                            continue;
                        }

                        if (arr[x][y] == 1) {
                            gold_cnt++;
                        }
                    }

                    if (reverse) {
                        init--;
                    }
                    else {
                        init++;
                    }
                }

                int gold_price = gold_cnt * m;

                if (total_price >= gold_price) {
                    max_gold_cnt = max(max_gold_cnt, gold_cnt);
                }
            }
        }
        k++;
    }

    cout << max_gold_cnt;
    return 0;
}