#include <iostream>
using namespace std;

int n, m;
int arr[100][100] = {};
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        int x = r - 1;
        int y = c - 1;

        arr[x][y] = 1;
        int cnt = 0;

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (InRange(nx, ny) && arr[nx][ny] == 1) {
                cnt++;
            }
        }

        if (cnt == 3) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}