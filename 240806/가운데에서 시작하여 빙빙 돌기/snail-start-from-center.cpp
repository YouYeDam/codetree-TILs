#include <iostream>
using namespace std;

int n;
int x, y;
int arr[100][100] = {};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n;
    int dir = 0;

    x = n / 2;
    y = n / 2;

    int cnt = 2;
    arr[x][y] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (!InRange(nx, ny) || arr[nx][ny] != 0) {
                dir = (dir + 3) % 4;
            }
            x = x + dx[dir];
            y = y + dy[dir];

            arr[x][y] = cnt;
            cnt++;
            if (cnt > n * n) {
                break;
            }
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