#include <iostream>

using namespace std;

int n, m;
int cnt = 0;
int graph[1001][1001] = {};
int visited[1001] = {};

void DFS(int cur_v)
{
    for (int i = 1; i <= n; i++)
    {
        if (graph[cur_v][i] == 1 && visited[i] != 1)
        {
            visited[i] = 1;
            cur_v = i;
            cnt++;
            DFS(cur_v);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
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
