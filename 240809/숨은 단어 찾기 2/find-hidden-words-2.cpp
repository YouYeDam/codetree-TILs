#include <iostream>
using namespace std;

int n, m;
char arr[50][50];

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++) {
            arr[i][j] = str[j];
        }
    }
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'L') {
                int x = i, y = j;
                for (int k = 0; k < 8; k++) {
                    int nx1 = x + dx[k];
                    int ny1 = y + dy[k];
                    if (InRange(nx1, ny1) && arr[nx1][ny1] == 'E') {
                        int nx2 = x + 2*dx[k];
                        int ny2 = y + 2*dy[k];
                        if (InRange(nx2, ny2) && arr[nx2][ny2] == 'E') {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}