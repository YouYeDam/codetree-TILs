#include <iostream>
using namespace std;

int dx[4] = {0, 1, -1, 0}; //우하상좌
int dy[4] = {1, 0, 0, -1};
int n, t;

int GetDir(char d) {
    if (d == 'R') {
        return 0;
    }
    else if (d == 'D') {
        return 1;
    }
    else if (d == 'U') {
        return 2;
    }
    else {
        return 3;
    }
}

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    cin >> n >> t;

    int r, c;
    char d;
    cin >> r >> c >> d;

    int x = r - 1;
    int y = c - 1;
    int d_num = GetDir(d);

    for (int i = 0; i < t; i++) {
        if (d_num == 0) {
            if (InRange(x, y + 1)) {
                y++;
            }
            else {
                d_num = 3 - d_num;
            }
        }
        else if (d_num == 1) {
            if (InRange(x + 1, y)) {
                x++;
            }
            else {
                d_num = 3 - d_num;
            }
        }
        else if (d_num == 2) {
            if (InRange(x - 1, y)) {
                x--;
            }
            else {
                d_num = 3 - d_num;
            }
        }
        else {
            if (InRange(x, y - 1)) {
                y--;
            }
            else {
                d_num = 3 - d_num;
            }
        }
    }

    cout << x + 1 << " " << y + 1;
    return 0;
}