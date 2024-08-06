#include <iostream>
#include <string>
using namespace std;

int n, t;
int arr[99][99] = {};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x,  int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}
int main() {
    string str;
    cin >> n >> t >> str;

    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = cnt;
            cnt++;
        }
    }

    int x = n / 2;
    int y = n / 2;
    int dir = 3;
    int sum = arr[x][y];

    for (int i = 0; i < t; i++) {
        if (str[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else if (str[i] == 'L') {
            dir = (dir + 3) % 4;
        }
        else {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (!InRange(nx, ny)) {
                continue;
            }

            x += dx[dir];
            y += dy[dir];
            sum += arr[x][y];
        }
    }

    cout << sum;
    return 0;
}