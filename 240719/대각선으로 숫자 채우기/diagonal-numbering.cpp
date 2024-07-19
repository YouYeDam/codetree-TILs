#include <iostream>
using namespace std;

int main() {
    int arr[100][100];
    int n, m;
    cin >> n >> m;
    int cnt = 1;

    int x = 0;
    int y = 0;
    int y_plus = 1;
    int x_plus = 1;
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[y][x] = cnt;
            cnt++;

            if (x == 0 || y == n - 1) {
                x = x_plus;
                x_plus++;
                y = 0;
                if (x > m - 1) {
                    x = m - 1;
                    y = y_plus;
                    y_plus++;
                }
            }
            else {
                x--;
                y++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}