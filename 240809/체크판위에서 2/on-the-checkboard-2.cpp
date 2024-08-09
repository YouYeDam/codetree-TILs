#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    char arr[15][15];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    char start_color = arr[0][0];
    int cnt = 0;

    for (int i = 1; i < r - 2; i++) {
        for (int j = 1; j < c - 2; j++) {
            if (arr[i][j] != start_color) {
                for (int k = i + 1; k < r - 1; k++) {
                    for (int v = j + 1; v < c - 1; v++) {
                        if (arr[k][v] == start_color) {
                            if (arr[0][0] != arr[r][c]) {
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}