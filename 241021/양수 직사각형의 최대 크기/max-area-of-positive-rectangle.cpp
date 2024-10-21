#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[20][20] = {};

    int max_size = -1;
        
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) { // 가로행 기준
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 1) {
                continue;
            }

            int col_size = 1;

            for (int k = j + 1; k < m; k++) {
                if (arr[i][k] >= 1) {
                    col_size++;
                }
                else {
                    break;
                }
            }

            for (int q = 1; q <= col_size; q++) {
                int temp_size = q;
                for (int l = i + 1; l < n; l++) {
                    bool IsPositive = true;
                    for (int p = j; p < j + q; p++) {
                        if (arr[l][p] < 1) {
                            IsPositive = false;
                            break;
                        }
                    }
                    if (!IsPositive) {
                        break;
                    }
                    temp_size += q;
                }
                max_size = max(max_size, temp_size);
            }
        }
    }

    cout << max_size;
    return 0;
}