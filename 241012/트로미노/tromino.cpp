#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[200][200] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int max_val = 0;

    for (int i = 0; i < n; i++) { // 가로 블록
        for (int j = 0; j < m - 2; j++) {
            int val = 0;

            for (int k = 0; k < 3; k++) {
                val += arr[i][j+k];
            }

            max_val = max(max_val, val);
        }
    }

    for (int i = 0; i < m; i++) { // 세로 블록
        for (int j = 0; j < n - 2; j++) {
            int val = 0;

            for (int k = 0; k < 3; k++) {
                val += arr[j+k][i];
            }

            max_val = max(max_val, val);
        }
    }

    for (int i = 0; i < n - 1; i++) { // 세칸 블록
        for (int j = 0; j < m - 1; j++) {
            int val = 0;

            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    val += arr[i+k][j+l];
                }
            }

            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    max_val = max(max_val, val - arr[i+k][j+l]);
                }
            }
        }
    }

    cout << max_val;
    return 0;
}