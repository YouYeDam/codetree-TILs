#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
//11 2 17 13 1 15 3
    int arr[1000];
    int even_cnt = 0;
    int odd_cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            even_cnt++;
        }
        else {
            odd_cnt++;
        }
    }

    int cnt = 0;
    bool IsOddHigh = false;

    if (even_cnt >= odd_cnt) {
        cnt = odd_cnt * 2;
    }
    else {
        cnt = even_cnt * 2;
        IsOddHigh = true;
    }

    if (IsOddHigh) {
        cnt += odd_cnt/ 2;
    }

    cout << cnt;
    return 0;
}