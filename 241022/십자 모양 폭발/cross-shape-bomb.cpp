#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[200][200];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int r, c;
    cin >> r >> c;
    r--; c--;

    int bomb_size = arr[r][c];

    for (int i = 0; i < bomb_size; i++) {
        if (r - i >= 0) {
            arr[r - i][c] = 0;
        }
        if (r + i < 200) {
            arr[r + i][c] = 0;
        }
        if (c - i >= 0) {
            arr[r][c - i] = 0;
        }
        if (c + i < 200) {
            arr[r][c + i] = 0;
        }
    }

    for (int j = 0; j < n; j++) {
        int tmp_arr[200];
        int tmp_cnt = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i][j] != 0) {
                tmp_arr[tmp_cnt] = arr[i][j];
                tmp_cnt++;
            }
        }
        
        int zero_cnt = n - tmp_cnt;
        for (int k = 0; k < zero_cnt; k++) {
            arr[k][j] = 0;
        }
        
        int tmp_idx = 0;
        for (int k = zero_cnt; k < n; k++) {
            arr[k][j] = tmp_arr[tmp_idx];
            tmp_idx++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}