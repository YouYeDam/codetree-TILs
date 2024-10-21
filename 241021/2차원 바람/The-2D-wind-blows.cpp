#include <iostream>
using namespace std;

int n, m, q;
int arr[100][100];
int res_arr[100][100];

int main() {
    cin >> n >> m >> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            res_arr[i][j] = arr[i][j];
        }
    }

    
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    r1--; c1--; r2--; c2--;
    
    int tmp1 = arr[r1][c2];
    for (int i = c2; i > c1; i--) {
        arr[r1][i] = arr[r1][i-1];
    }

    int tmp2 = arr[r2][c2];
    for (int i = r2; i > r1 + 1; i--) {
        arr[i][c2] = arr[i-1][c2];
    }
    arr[r1 + 1][c2] = tmp1;

    int tmp3 = arr[r2][c1];
    for (int i = c1; i < c2 - 1; i++) {
        arr[r2][i] = arr[r2][i+1];
    }
    arr[r2][c2 - 1] = tmp2;

    for (int i = r1; i < r2 - 1; i++) {
        arr[i][c1] = arr[i+1][c1];
    }
    arr[r2 - 1][c1] = tmp3;

    for (int i = r1; i <= r2; i++) {
        for (int j = c1; j <= c2; j++) {
            int sum = arr[i][j];
            int cnt = 1;

            if (i > 0) {
                sum += arr[i - 1][j];
                cnt++;
            }
            if (i < n - 1) {
                sum += arr[i + 1][j];
                cnt++;
            }
            if (j > 0) {
                sum += arr[i][j - 1];
                cnt++;
            }
            if (j < m - 1) {
                sum += arr[i][j + 1];
                cnt++;
            }

            int avg = sum / cnt;
            res_arr[i][j] = avg;
        }
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << res_arr[i][j] << " ";
        }
        cout << endl;
    }
}