#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    int y = 0;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    for (int i = 0; i < n; i++) {
        char dir;
        int dir_num;
        int dis;
        cin >> dir >> dis;

        if (dir == 'E') {
            dir_num = 0;
        }
        else if (dir == 'S') {
            dir_num = 1;
        }
        else if (dir == 'W') {
            dir_num = 2;
        }
        else {
            dir_num = 3;
        }

        x += dx[dir_num] * dis;
        y += dy[dir_num] * dis;
    }
    cout << x << " " << y;
    return 0;
}