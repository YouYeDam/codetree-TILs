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

    if (even_cnt > odd_cnt) {
        cnt = odd_cnt * 2 + 1;
    }
    else if (odd_cnt > even_cnt) {
        cnt = even_cnt * 2;
        rest_cnt = odd_cnt - even_cnt;
        IsOddHigh = true;
    }
    else {
        cnt = odd_cnt * 2;
    }


    if (IsOddHigh) {
        if (rest_cnt % 3 == 0) {
            cnt += 2 * (rest_cnt / 3);
        }
        else if (rest_cnt % 3 == 1) {
            cnt += 2 * (rest_cnt / 3) - 1;
        }
        else if (rest_cnt % 3 == 2) {
            cnt += 2 * (rest_cnt / 3) + 1;
        }
    }

    cout << cnt;
    return 0;
}