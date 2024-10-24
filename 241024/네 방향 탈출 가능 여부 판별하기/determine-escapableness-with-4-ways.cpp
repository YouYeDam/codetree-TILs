#include <iostream>
#include <queue>
using namespace std;

int n, m;
int arr[100][100] = {};
int visited[100][100] = {};
queue<pair<int, int>> q;

void Push(int x, int y) {
    visited[x][y] = 1;
    q.push(make_pair(x, y));
}

bool CanGo(int x, int y) {
    if (x < 0 || x >= n || y < 0 || y >= m) {
        return false;
    }
    if (visited[x][y] || arr[x][y] == 0) {
        return false;
    }
    return true;
}
void BFS() {
    bool IsExist = false;
    int dx[4] = {1, 0, -1, 0}; // 북동남서
    int dy[4] = {0, 1, 0, -1};

    while (!q.empty()) {
        pair<int, int> cur_pos = q.front();
        q.pop();

        int x = cur_pos.first;
        int y = cur_pos.second;

        for (int i = 0; i < 4; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if (CanGo(new_x, new_y)) {
                Push(new_x, new_y);
            }
        }

    }
}


int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    Push(0, 0);
    BFS();
    
    if (visited[n-1][m-1]) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}