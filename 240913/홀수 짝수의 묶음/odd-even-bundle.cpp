#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

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
    int rest_cnt = 0;
    bool IsOddHigh = false;

    if (even_cnt >= odd_cnt) {
        rest_cnt = even_cnt - odd_cnt;
        cnt = odd_cnt * 2;
    }
    else {
        rest_cnt = odd_cnt - even_cnt;
        cnt == even_cnt * 2;
        IsOddHigh = true;
    }

    if (IsOddHigh) {
        cnt += rest_cnt / 2;
    }

    cout << cnt;
    return 0;
}