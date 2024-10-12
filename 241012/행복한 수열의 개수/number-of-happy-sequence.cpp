#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100][100] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    int happy_cnt = 0;

    for (int i = 0; i < n; i++) { // 행
        for (int j = 0; j < n - 1; j++) {
            int val = arr[i][j];
            int same_cnt = 0;
            bool IsHappy = false;

            for (int k = j; k < n; k++) {

                if (val == arr[i][k]) {
                    same_cnt++;
                    if (same_cnt == m) {
                        happy_cnt++;
                        IsHappy = true;
                        break;
                    }
                }
                else {
                    break;
                }
            }

            if (IsHappy) {
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) { // 열
        for (int j = 0; j < n - 1; j++) {
            int val = arr[j][i];
            int same_cnt = 0;
            bool IsHappy = false;

            for (int k = j; k < n; k++) {

                if (val == arr[k][i]) {
                    same_cnt++;
                    if (same_cnt == m) {
                        happy_cnt++;
                        IsHappy = true;
                        break;
                    }
                }
                else {
                    break;
                }
            }

            if (IsHappy) {
                break;
            }
        }
    }

    cout << happy_cnt;
    return 0;
}