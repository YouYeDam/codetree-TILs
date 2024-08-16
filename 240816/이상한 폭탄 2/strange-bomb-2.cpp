#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = -1;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j <= i + k; j++) {
            if (j > n) {
                break;
            }

            if (arr[i] == arr[j]) {
                max_val = max(max_val, arr[i]);
            }
        }
    }

    cout << max_val;
    return 0;
}