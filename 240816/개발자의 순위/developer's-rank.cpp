#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    int arr[10][20];

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;

    for (int num_fir = 1; num_fir <= n; num_fir++) {
        for (int num_sec = 1; num_sec <= n; num_sec++) {
            if (num_fir == num_sec) {
                continue;
            }
            bool IsHigh = true;

            for (int i = 0; i < k; i++) {
                bool IsHighCheck = true;
                for (int j = 0; j < n; j++) {
                    if (arr[i][j] == num_fir) {
                        break;
                    }
                    else if (arr[i][j] == num_sec) {
                        IsHighCheck = false;
                        break;
                    }
                }

                if (!IsHighCheck) {
                    IsHigh = false;
                    break;
                }
            }

            if (IsHigh) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}