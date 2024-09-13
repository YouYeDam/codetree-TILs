#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    while (true) {
        bool IsSort = true;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                IsSort = false;
                break;
            }
        }
        if (IsSort) {
            cout << cnt;
            break;
        }
        int last_idx = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[0]) {
                last_idx = i;
            }
        }

        int obj_idx = n - 1;
        for (int i = last_idx + 1; i < n; i++) {
            bool IsAfterSort = true;
            for (int j = i; j < n - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    IsAfterSort = false;
                    break;
                }
            }
            if (IsAfterSort) {
                obj_idx = i - 1;
                break;
            }
        }
        
        int temp = arr[0];
        for (int i = 0; i < obj_idx; i++) {
            arr[i] = arr[i + 1];
        }
        arr[obj_idx] = temp;
        cnt++;

    }
    return 0;
}