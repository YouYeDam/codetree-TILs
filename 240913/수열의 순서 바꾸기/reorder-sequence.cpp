#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[101];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    arr[n] = 101;

    int cnt = 0;
    while (true) {
        bool IsSort = true;

        for (int i = 0; i < n; i++) {
            if (arr[i]> arr[i+1]) {
                IsSort = false;
                break;
            }
        }

        if (IsSort) {
            break;
        }

        int max_val = 0;
        int max_val_idx;
        for (int i = 1; i < n; i++) {
            if (arr[i] > max_val) {
                max_val = arr[i];
                max_val_idx = i;
            }
        }
        int obj_idx = n - 1;
        bool IsBetween = false;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] < arr[0] && arr[i + 1] > arr[0]) {
                obj_idx = i;
                IsBetween = true;
            }
        }
        if (!IsBetween) {
            for (int i = max_val_idx + 1; i < n; i++) {
                if (arr[i] > arr[0]) {
                    obj_idx = i - 1;
                }
            }
        }
        int temp = arr[0];
        for (int i = 0; i < obj_idx; i++) {
            arr[i] = arr[i + 1];
        }
        arr[obj_idx] = temp;
        cnt++;
    }
    cout << cnt;
    return 0;
}

//제일 큰 숫자 뒤 + 나보다 큰 숫자 나오기 전