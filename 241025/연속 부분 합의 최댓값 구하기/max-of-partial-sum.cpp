#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100000];
    int dp[100000] = {};
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dp[0] = arr[0];

    for (int i = 1; i < n; i++) {
        dp[i] = max(arr[i], dp[i-1] + arr[i]);
    }

    for (int i = 0; i < n; i++) {
        max_val = max(max_val, dp[i]);
    }
    cout << max_val;
    return 0;
}