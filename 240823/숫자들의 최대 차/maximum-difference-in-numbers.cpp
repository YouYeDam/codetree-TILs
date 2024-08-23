#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[10001] = {};

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[num]++;
    }

    int max_cnt = 0;

    for (int i = 1; i <= 10000; i++) {
        if (arr[i] == 0) {
            continue;
        }
        int cnt = 0;

        for (int j = i; j <= i + k; j++) {
            cnt += arr[j];
        }

        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}