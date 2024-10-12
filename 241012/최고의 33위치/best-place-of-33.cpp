#include <iostream>
#include <algorithm>
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

    int max_cnt = 0;

    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            int cnt = 0;

            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    if (arr[i+k][j+l] == 1) {
                        cnt++;
                    }
                }
            }
            
            max_cnt = max(max_cnt, cnt);
        }
    }

    cout << max_cnt;
    return 0;
}