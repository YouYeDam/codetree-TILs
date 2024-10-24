#include <iostream>
using namespace std;

int n, m;
int cnt = 0;
int graph[1000][1000] = {};
int visited[1001] = {};

void DFS(int vertex) {
    for (int cur_v = 1; cur_v <= n; cur_v++) {
        if (graph[vertex][cur_v] && !visited[cur_v]) {
            cnt++;
            visited[cur_v] = true;
            DFS(cur_v);
        }
    }
}


int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    visited[1] = 1;
    DFS(1);
    cout << cnt;
    return 0;
}