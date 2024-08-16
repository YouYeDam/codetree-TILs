#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10][2];
    int line[101] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
        
        for (int j = arr[i][0]; j <= arr[i][1]; j++) {
            line[j]++;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {

                int new_line[101] = {};
                for (int p = 0; p < 101; p++) {
                    new_line[p] = line[p];
                }

                for (int p = arr[i][0]; p <= arr[i][1]; p++) {
                    new_line[p]--;
                }
                for (int p = arr[j][0]; p <= arr[j][1]; p++) {
                    new_line[p]--;
                }
                for (int p = arr[k][0]; p <= arr[k][1]; p++) {
                    new_line[p]--;
                }
                bool IsOverlap = false;
                for (int p = 0; p < 101; p++) {
                    if (new_line[p] > 1) {
                        IsOverlap = true;
                        break;
                    }
                }

                if (!IsOverlap) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}