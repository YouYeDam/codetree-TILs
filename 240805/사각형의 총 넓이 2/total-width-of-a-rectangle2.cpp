#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[201][201] = {};

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j <= x2 - 1; j++) {
            for (int k = y1; k <= y2 - 1; k++) {
                arr[j][k] = 1;
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            if (arr[i][j] == 1) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}