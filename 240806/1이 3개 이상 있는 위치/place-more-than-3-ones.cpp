#include <iostream>
using namespace std;

int n;
int arr[100][100] = {};

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};


bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int total_cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cnt = 0;
            for (int dir_num = 0; dir_num < 4; dir_num++) {
                int nx = i + dx[dir_num];
                int ny = j + dy[dir_num];
                if (InRange(nx, ny) && arr[nx][ny] == 1) {
                    cnt++;
                }
            }
            if (cnt >= 3) {
                total_cnt++;
            }
        }
    }
    cout << total_cnt;
    return 0;
}