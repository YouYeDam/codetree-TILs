#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[11][11] = {};

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        arr[a][b]++;
    }

    int max_cnt = 0;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int cnt;

            if (i == j) {
                cnt = arr[i][j];
            }
            else {
                cnt = arr[i][j] + arr[j][i];
            }

            max_cnt = max(max_cnt, cnt);
        }
    }
    cout << max_cnt;
    return 0;
}