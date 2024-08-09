#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[20][20];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int max_val = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            int cnt = 0;
            for (int k = j; k <= j + 2; k++) {
                if (arr[i][k] == 1) {
                    cnt++;
                }
            }
            if (cnt > max_val) {
                max_val = cnt;
            }
        }
    }
    cout << max_val;
    return 0;
}