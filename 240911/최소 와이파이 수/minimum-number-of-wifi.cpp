#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[100] = {};

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

            if (arr[i] == 1) {
                cnt++;
                break;
            }
        }
        idx += x - m;
    }
    cout << cnt;
    return 0;
}