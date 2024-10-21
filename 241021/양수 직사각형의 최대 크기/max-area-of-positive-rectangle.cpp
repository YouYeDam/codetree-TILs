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

            int size = 1;
            int col_size = 1;

            for (int k = j + 1; k < m; k++) {
                if (arr[i][k] >= 1) {
                    col_size++;
                }
                else {
                    break;
                }
            }
            size = col_size;
            
            if (size == 1) {
                max_size = max(max_size, size);
                break;
            }

            for (int l = i + 1; l < n; l++) {
                bool IsPositive = true;
                for (int p = j; p < j + col_size; p++) {
                    if (arr[l][p] < 1) {
                        IsPositive = false;
                        break;
                    }
                }
                if (!IsPositive) {
                    break;
                }

                size += col_size;
            }

            max_size = max(max_size, size);
        }
    }


    for (int i = 0; i < n; i++) { // 세로열 기준
        for (int j = 0; j < m; j++) {
            if (arr[i][j] < 1) {
                continue;
            }

            int size = 1;
            int row_size = 1;

            for (int k = i + 1; k < n; k++) {
                if (arr[k][j] >= 1) {
                    row_size++;
                }
                else {
                    break;
                }
            }
            size = row_size;
            
            if (size == 1) {
                max_size = max(max_size, size);
                break;
            }

            for (int l = j + 1; l < m; l++) {
                bool IsPositive = true;
                for (int p = i; p < i + row_size; p++) {
                    if (arr[p][l] < 1) {
                        IsPositive = false;
                        break;
                    }
                }
                if (!IsPositive) {
                    break;
                }

                size += row_size;
            }

            max_size = max(max_size, size);
        }
    }

    cout << max_size;
    return 0;
}