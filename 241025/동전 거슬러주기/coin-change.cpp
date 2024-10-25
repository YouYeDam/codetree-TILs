#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n, m;
int coins[100];
int dp[10001];

void InitDP() {
    dp[0] = 0;

    for (int i = 1; i <= m; i++) {
        dp[i] = INT_MAX;
    }
}

int main() {
    cin >> n >> m;

    InitDP();
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        dp[coins[i]] = 1;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= coins[j]) {
                continue;
            } 
            if (dp[i - coins[j]] == INT_MAX) {
                continue;
            }

            dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }

    int ans = dp[m];
    if (ans == INT_MAX) {
        ans = -1;
    }
    cout << ans;
    return 0;
}