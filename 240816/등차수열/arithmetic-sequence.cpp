#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_cnt = 0;

    for (int k = 1; k <= 100; k++) {
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i+1; j < n; j++) {
                if (arr[j] - k == k - arr[i]) {
                    cnt++;
                }
            }
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}