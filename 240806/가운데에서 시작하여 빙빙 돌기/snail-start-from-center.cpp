#include <iostream>
using namespace std;

int n;
int x, y, p;
int arr[100][100] = {};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (n / 2 - p <= x && x <= n / 2 + p && n / 2 - p <= y && y <= n / 2 + p);
}

int main() {
    cin >> n;
    int dir = 0;
    x = n / 2;
    y = n / 2;
    p = 1;
    int limit = 3;

    int cnt = 2;
    arr[x][y] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (!InRange(nx, ny)) {
                dir = (dir + 3) % 4;
            }
            x = x + dx[dir];
            y = y + dy[dir];

            arr[x][y] = cnt;
            cnt++;
            if (cnt == limit * limit) {
                limit += 2;
                p++;
            }
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