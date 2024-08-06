#include <iostream>
using namespace std;

int n, m;

char arr[100][100] = {};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;
    char alp = 'B';
    int dir = 0;
    int x = 0; int y = 0;
    int cnt = 1;
    arr[0][0] = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (!InRange(nx, ny) || arr[nx][ny] != '\0') {
                dir = (dir + 1) % 4;
            }
            x += dx[dir];
            y += dy[dir];
            arr[x][y] = alp;

            if (alp == 'Z') {
                alp = 'A';
            }
            else {
                alp++;
            }
            cnt++;
            if (cnt >= n * m) {
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