#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = arr[0];

    int pos = 0;

    while (true) {
        int min_val = INT_MAX;
        int temp_pos = pos;

        for (int i = pos + 1; i <= pos + k; i++) {
            if (i > n - 1) {
                i = n - 1;
            }
            if (arr[i] <= min_val) {
                min_val = arr[i];
                temp_pos = i;
            }

            if (i == n - 1) {
                break;
            }
        }
        
        pos = temp_pos;
        max_val = max(max_val, arr[pos]);

        if (pos == n - 1) {
            break;
        }
    }

    cout << max_val;
    return 0;
}