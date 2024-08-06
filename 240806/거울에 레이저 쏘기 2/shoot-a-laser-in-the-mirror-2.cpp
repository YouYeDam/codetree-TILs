#include <iostream>
#include <string>
using namespace std;

int n, k;
int x, y;
char arr[100][100];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int GetDir(int for_get_num) {
    if (for_get_num == 0) {
        return 1;
    }
    else if (for_get_num == 1) {
        return 2;
    }
    else if (for_get_num == 2) {
        return 3;
    }
    else {
        return 0;
    }
}

void GetStart(int for_get_num) {
    if (for_get_num == 0) {
        x = 0;
        y = k % n;
    }
    else if (for_get_num == 1) {
        x = k % n;
        y = n - 1;
    }
    else if (for_get_num == 2) {
        x = n - 1;
        y = n - k % n - 1;
    }
    else {
        x = n - k % n - 1;
        y = 0;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string map;
        cin >> map;
        for (int j = 0; j < n; j++) {
            arr[i][j] = map[j];
        }
    }
    cin >> k;
    k--;
    int for_get_num = k / n;
    int dir = GetDir(for_get_num);
    GetStart(for_get_num);

    int cnt = 0;

    while (true) {
        if (arr[x][y] == '/') {
            if (dir == 0) {
                x--;
                dir = 3;
            }
            else if (dir == 1) {
                y--;
                dir = 2;
            }
            else if (dir == 2) {
                x++;
                dir = 1;
            }
            else {
                y++;
                dir = 0;
            }
        }
        else {
            if (dir == 0) {
                x++;
                dir = 1;
            }
            else if (dir == 1) {
                y++;
                dir = 0;
            }
            else if (dir == 2) {
                x--;
                dir = 3;
            }
            else {
                y--;
                dir = 2;
            }
        }
        cnt++;
        if (!InRange(x, y)) {
            break;
        }
    }
    cout << cnt;
    return 0;
}