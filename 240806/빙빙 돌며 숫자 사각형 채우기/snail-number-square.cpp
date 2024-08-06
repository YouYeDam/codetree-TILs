#include <iostream>
using namespace std;

int n, m;
int x, y;
int dir_num;

int arr[100][100] = {};
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n >> m;
    x = 0; y = 0;
    dir_num = 0;
    int cnt = 2;
    arr[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int nx = x + dx[dir_num];
            int ny = y + dy[dir_num];

            if (!InRange(nx, ny) || arr[nx][ny] != 0) {
                dir_num = (dir_num + 3) % 4;
            }
            x = x + dx[dir_num];
            y = y + dy[dir_num];
            arr[x][y] = cnt;
            cnt++;
            if (cnt > n * m) {
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}