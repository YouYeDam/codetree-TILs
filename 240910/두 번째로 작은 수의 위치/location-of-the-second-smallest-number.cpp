#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        min_val = min(min_val, arr[i]);
    }

    int sec_val = INT_MAX;
    int idx;
    bool IsExist = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == min_val) {
            continue;
        }

        if (arr[i] < sec_val) {
            sec_val = arr[i];
            idx = i;
            IsExist = true;
        }
    }
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == sec_val) {
            cnt++;
            if (cnt >= 2) {
                IsExist = false;
                break;
            }
        }
    }

    if (IsExist) {
        cout << idx + 1;
    }
    else {
        cout << -1;
    }
    return 0;
}