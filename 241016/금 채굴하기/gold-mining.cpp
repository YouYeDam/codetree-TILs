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

                for (int x = i - k + 1; x <= i + k - 1; x++) {
                    for (int y = j - k + 1; y <= j + k - 1; y++) {
                        if (x < 0 || x >= n || y < 0 || y >= n) {
                            continue;
                        }

                        if (arr[x][y] == 1) {
                            gold_cnt++;
                        }
                    }
                }

                if (i - k >= 0 && i - k < n) {
                    if (arr[i - k][j] == 1) {
                        gold_cnt++;
                    }
                }
                if (i + k >= 0 && i + k < n) {
                    if (arr[i + k][j] == 1) {
                        gold_cnt++;
                    }
                }
                if (j - k >= 0 && j - k < n) {
                    if (arr[i][j - k] == 1) {
                        gold_cnt++;
                    }
                }
                if (j + k >= 0 && j + k < n) {
                    if (arr[i][j + k] == 1) {
                        gold_cnt++;
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