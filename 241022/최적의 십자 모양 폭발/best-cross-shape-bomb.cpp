#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[50][50];

void Make_sample_arr(int sample_arr[][50]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sample_arr[i][j] = arr[i][j];
        }
    }
}

void Bomb(int sample_arr[][50], int r, int c) {
    int bomb_size = sample_arr[r][c];

    for (int i = 0; i < bomb_size; i++) {
        if (r - i >= 0) {
            sample_arr[r - i][c] = 0;
        }
        if (r + i < n) {
            sample_arr[r + i][c] = 0;
        }
        if (c - i >= 0) {
            sample_arr[r][c - i] = 0;
        }
        if (c + i < n) {
            sample_arr[r][c + i] = 0;
        }
    }
}

void Gravity(int sample_arr[][50]) {
    for (int i = 0; i < n; i++) {
        int tmp_arr[50];
        int tmp_idx = 0;

        for (int j = 0; j < n; j++) {
            if (sample_arr[j][i] != 0) {
                tmp_arr[tmp_idx] = sample_arr[j][i];
                tmp_idx++;
            }
        }
        
        int k = 0;
        for (int j = 0; j < n; j++) {
            if (j < n - tmp_idx) {
                sample_arr[j][i] = 0;
            }
            else {
                sample_arr[j][i] = tmp_arr[k];
                k++;
            }
        }
    }
}

int Count_Pair(int sample_arr[][50]) {
    int cnt = 0;

    for (int i = 0; i < n; i++) { // 가로 기준
        for (int j = 0; j < n - 1; j++) {
            if(sample_arr[i][j] == 0) {
                continue;
            }
            if (sample_arr[i][j] == sample_arr[i][j + 1]) {
                cnt++;
                j++;
            }
        }
    }

    for (int i = 0; i < n; i++) { // 세로 기준
        for (int j = 0; j < n - 1; j++) {
            if(sample_arr[j][i] == 0) {
                continue;
            }
            if (sample_arr[j][i] == sample_arr[j + 1][i]) {
                cnt++;
                j++;
            }
        }
    }

    return cnt;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int max_cnt = 0;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            int sample_arr[50][50];
            Make_sample_arr(sample_arr);

            Bomb(sample_arr, r, c);
            Gravity(sample_arr);

            int cnt = Count_Pair(sample_arr);
            max_cnt = max(max_cnt, cnt);
        }
    }
    cout << max_cnt;

    return 0;
}