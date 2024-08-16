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

    for (int i = 0; i <= 1000; i++) {
        int cnt = 0;
        bool IsIce = false;
        for (int j = 0; j < n; j++) {
            if (!IsIce) {
                if (arr[j] > i) {
                    cnt++;
                    IsIce = true;
                }
            }
            else {
                if (arr[j] <= i) {
                    IsIce = false;
                }
            }
        }

        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}