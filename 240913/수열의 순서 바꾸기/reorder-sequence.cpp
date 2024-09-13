#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100] = {};
    int min_val = 1000;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        min_val = min(min_val, arr[i]);
    }

    int cnt = 0;

    while (true) {
        bool IsSort = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                IsSort = false;
            }
        }
        if (IsSort) {
            cout << cnt;
            break;
        }

        int obj_idx;
        int sec_idx;
        int sec_val = 1000;
        for (int i = 0; i < n; i++) {
            if (arr[i] == min_val) {
                continue;
            }
            if (arr[i] < sec_val) {
                sec_val = arr[i];
                sec_idx = i;
            }
        }

        bool IsSecsort = true;
        for (int i = sec_idx; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                IsSecsort = false;
            }
        }

        if (IsSecsort) {
            obj_idx = sec_idx - 1;
        }
        else {
            for (int i = sec_idx + 1; i < n; i++) {
                bool IsAfterSort = true;
                for (int j = i; j < n - 1; j++) {
                    if (arr[i] > arr[i + 1]) {
                        IsAfterSort = false;
                    }
                }
                if (IsAfterSort) {
                    obj_idx = i - 1;
                    break;
                }
            }
        }

        for (int i = 1; i < n; i++) {
            if (arr[0] > arr[i]) {
                obj_idx = i;
            }
        }

        int temp = arr[0];
        for (int i = 0; i < obj_idx; i++) {
            arr[i] = arr[i+1];
        }
        arr[obj_idx] = temp;

        cnt++;
    }
    return 0;
}