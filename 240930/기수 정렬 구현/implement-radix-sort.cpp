#include <iostream>
using namespace std;

int n;
int arr[100000];

void RadixSort() {
    int k = 6;
    int x = 1;
    for (int pos = k - 1; pos >= 0; pos--) {
        int new_arr[10][100000] = {};
        int cnt_arr[11] = {};

        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / x) % 10;
            new_arr[digit][cnt_arr[digit]] = arr[i];
            cnt_arr[digit]++;
        }
        x *= 10;

        int store_arr[100000];
        int idx = 0;

        for (int i = 0; i < 10; i++) {
            int j = 0;
            while (new_arr[i][j] != 0) {
                store_arr[idx] = new_arr[i][j];
                j++;
                idx++;
            }
        }

        for (int i = 0; i < n; i++) {
            arr[i] = store_arr[i];
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    RadixSort();

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}