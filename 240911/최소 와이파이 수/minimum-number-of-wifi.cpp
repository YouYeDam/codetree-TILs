#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int wifi_idx = m;
    for (int i = wifi_idx; i < n; i+= m*2+1) {
        if (m == 0 || m >= n - 1) {
            break;
        }
        for (int j = wifi_idx - m; j < wifi_idx + m; j++) {
            if (j < 0 || j > n - 1) {
                continue;
            }
            if (arr[j] == 1) {
                cnt++;
                break;
            }
        }
    }
    if (m == 0) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                cnt++;
            }
        }
    }
    else if (m >= n - 1) {
        bool IsNeed = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                IsNeed = true;
                cnt = 1;
            }
        }
        if (!IsNeed) {
            cnt = 0;
        }
    }
    cout << cnt;
    return 0;
}