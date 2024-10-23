#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;

    int arr[20][20];
    int bead_arr[20][20] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        r--; c--;

        bead_arr[r][c] = 1;
    }
    
    for (int i = 0; i < t; i++) {
        int tmp_bead_arr[20][20] = {};

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (bead_arr[r][c] == 1) {
                    int max_val = 0;
                    int mov_r = r;
                    int mov_c = c;

                    if (r-1 >= 0) { // 상
                        if (arr[r-1][c] > max_val) {
                            max_val = arr[r-1][c];
                            mov_r = r - 1;
                            mov_c = c;
                        }
                    }
                    if (r+1 <= n-1) { // 하
                        if (arr[r+1][c] > max_val) {
                            max_val = arr[r+1][c];
                            mov_r = r + 1;
                            mov_c = c;
                        }
                    }
                    if (c-1 >= 0) { // 좌
                        if (arr[r][c-1] > max_val) {
                            max_val = arr[r][c-1];
                            mov_r = r;
                            mov_c = c - 1;
                        }
                    }
                    if (c+1 <= n-1) { // 우
                        if (arr[r][c+1] > max_val) {
                            max_val = arr[r][c+1];
                            mov_r = r;
                            mov_c = c + 1;
                        }
                    }

                    tmp_bead_arr[mov_r][mov_c]++;
                }
            }
        }

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                if (tmp_bead_arr[r][c] >= 2) {
                    tmp_bead_arr[r][c] = 0;
                }
            }
        }

        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                bead_arr[r][c] = tmp_bead_arr[r][c];
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (bead_arr[i][j] == 1) {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}