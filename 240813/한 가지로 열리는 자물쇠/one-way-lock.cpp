#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[3];

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                int a = abs(arr[0] - i);
                int b = abs(arr[1] - j);
                int c = abs(arr[2] - k);

                if (a <= 2 || b <= 2 || c <= 2) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}