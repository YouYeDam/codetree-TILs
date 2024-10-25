#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100000];
    int dp[100000] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    dp[0] = arr[0];

    for (int i = 1; i <= n; i++) {
        dp[i] = max(arr[i], dp[i-1] + arr[i]);
    }

    cout << dp[n-1];
    return 0;
}