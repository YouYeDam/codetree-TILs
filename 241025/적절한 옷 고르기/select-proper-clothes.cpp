#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int wear[200][3];
    int dp[201][200];

    for (int i = 0; i < n; i++) {
        cin >> wear[i][0] >> wear[i][1] >> wear[i][2];
    }
    
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = INT_MIN;
        }
    }

    for (int i = 0; i < n; i++) {
        if (wear[i][0] == 1) {
            dp[1][i] = wear[i][2];
        }
    }

    for (int i = 2; i <= m; i++) { // 날짜
        for (int j = 0; j < n; j++) { // 오늘 입는 옷
            if (wear[j][0] > i || wear[j][1] < i) {
                continue;
            }

            int max_val = INT_MIN;
            int pre_idx;

            for (int k = 0; k < n; k++) { // 어제 입은 옷
                if (dp[i-1][k] == INT_MIN) {
                    continue;
                }

                int val = abs(wear[k][2] - wear[j][2]);
                if (val > max_val) {
                    max_val = val;
                    pre_idx = k;
                }
            }

            if (i == 2) {
                dp[i][j] = max_val;
            }
            else {
                dp[i][j] = dp[i-1][pre_idx] + max_val;
            }
        }
    }

    int max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        max_val = max(max_val, dp[m][i]);
    }

    cout << max_val;

    return 0;
}