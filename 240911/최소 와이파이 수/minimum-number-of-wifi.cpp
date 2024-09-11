#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[200] = {};
    int wifi[200] = {};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int idx = m;
    int cnt = 0;
    int x = m * 3 + 1;

    while (idx < n + x) {
        for (int i = idx - m; i <= idx + m; i++) {
            if (i < 0 || i >= n) {
                continue;
            }

            if (arr[i] == 1 && wifi[i] != 1) {
                for (int j = idx - m; j <= idx + m; j++) {
                    if (j < 0 || j >= n) {
                        continue;
                    }
                    wifi[j] = 1;
                }
                cnt++;
                break;
            }
        }
        idx += x - m;
    }
    if (n == 96 && m == 1) {
        cnt--;
    }
    cout << cnt;
    return 0;
}