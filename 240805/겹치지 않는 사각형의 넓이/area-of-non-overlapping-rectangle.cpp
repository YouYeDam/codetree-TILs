#include <iostream>
using namespace std;

int main() {
    int arr[2001][2001] = {};
    for (int i = 0; i < 3; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 1000;
        y1 += 1000;
        x2 += 1000;
        y2 += 1000;

        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                if (i != 2) {
                    arr[j][k]++;
                }
                else {
                    arr[j][k]+=2;
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (arr[i][j] == 1) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}