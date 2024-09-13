#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
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
        int obj_idx = n - 2;

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

    // 가장 마지막에 존재하는 얘보다 작은 숫자 뒤
    // 작은 숫자가 없을 경우 가장 마지막에 존재하는 얘보다 큰 숫자 앞 = 마지막 앞

}