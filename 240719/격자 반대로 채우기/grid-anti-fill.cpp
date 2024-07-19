#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10][10];
    int cnt = 1;
    int x = n - 1;
    int y = n - 1;

    bool x_left = false;
    bool y_up = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[y][x] = cnt;
            cnt++;

            if (x_left) {
                x--;
                x_left = false;
            }
            else if (y_up) {
                y--;
                if (y == 0) {
                    x_left = true;
                    y_up = false;
                }
            }
            else {
                y++;
                if (x != n - 1 && y == n - 1) {
                    x_left = true;
                    y_up = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}