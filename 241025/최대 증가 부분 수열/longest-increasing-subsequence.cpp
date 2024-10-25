#include <iostream>
using namespace std;

int n;
int arr[1000];
int dp[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    dp[0] = 1;

    for (int i = 1; i < n; i++) {
        dp[i] = 0;
    }


    for (int i = 1; i < n; i++) {
        int max_len = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                max_len = max(max_len, dp[j]);
            }
        }
        dp[i] = max_len + 1;
    }

    int max_len = 0;
    for (int i = 0; i < n; i++) {
        max_len = max(max_len, dp[i]);
    }

    cout << max_len;
    return 0;
}