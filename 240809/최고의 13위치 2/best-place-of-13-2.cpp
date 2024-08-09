#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[20][20] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int max_val = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            for (int k = 0; k < n; k++) {
                for (int v = 0; v < n - 2; v++) {
                    if (k == i) {
                        if (v >= i && v <= i + 2) {
                            continue;
                        }
                        if (v + 1 >= i && v + 1 <= i + 2) {
                            continue;
                        }
                        if (v + 2 >= i && v + 2 <= i + 2) {
                            continue;
                        }
                    }
                    int sum1 = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
                    int sum2 = arr[k][v] + arr[k][v + 1] + arr[k][v + 2];
                    if (sum1 + sum2 > max_val) {
                        max_val = sum1 + sum2;
                    }
                }
            }
        }
    }
    cout << max_val;
    return 0;
}