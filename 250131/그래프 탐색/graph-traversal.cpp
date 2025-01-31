#include <iostream>

using namespace std;

int n, m;
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

    int cnt = 0;
    for (int i = 2; i < 1001; i++)
    {
        if (visited[i] == 1)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
