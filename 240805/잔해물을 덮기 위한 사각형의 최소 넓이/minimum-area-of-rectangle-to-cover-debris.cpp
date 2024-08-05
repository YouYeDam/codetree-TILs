#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[2001][2001] = {};

    for (int i = 0; i < 2; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                if (i == 0) {
                    arr[j][k]++;
                }
                else {
                    arr[j][k] += 2;
                }
            }
        }
    }
    int min_x = INT_MAX;
    int max_x = INT_MIN;
    int min_y = INT_MAX;
    int max_y = INT_MIN;

    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (arr[i][j] == 1) {
                if (i < min_x) {
                    min_x = i;
                }
                if (i > max_x) {
                    max_x = i;
                }
                if (j < min_y) {
                    min_y = j;
                }
                if (j > max_y) {
                    max_y = j;
                }
            }
        }
    }

    int res_x = max_x - min_x + 1;
    int res_y = max_y - min_y + 1;
    cout << res_x * res_y;
    return 0;
}