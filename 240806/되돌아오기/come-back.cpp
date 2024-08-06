#include <iostream>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int GetDir(char dir) {
    if (dir == 'E') {
        return 0;
    }
    else if (dir == 'W') {
        return 1;
    }
    else if (dir == 'S') {
        return 2;
    }
    else {
        return 3;
    }
}

int main() {
    int n;
    cin >> n;
    int time = 0;
    bool IsReturn = false;
    int x = 0; int y = 0;

    for (int i = 0; i < n; i++) {
        char dir;
        int t;
        cin >> dir >> t;
        int dir_num = GetDir(dir);
        
        for (int j = 0; j < t; j++) {
            x += dx[dir_num];
            y += dy[dir_num];
            time++;

            if (x == 0 && y == 0) {
                cout << time;
                IsReturn = true;
                break;
            }
        }

        if (IsReturn) {
            break;
        }
    }

    if (!IsReturn) {
        cout << -1;
    }
    return 0;
}