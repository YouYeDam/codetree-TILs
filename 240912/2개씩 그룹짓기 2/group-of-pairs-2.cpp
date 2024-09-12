#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[200000];
    int arr_low[100000] = {};
    int arr_high[100000] = {};

    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }
    sort (arr, arr + 2*n);

    int idx_low = 0;
    int idx_high = 0;
    for (int i = 0; i < 2*n; i++) {
        if (i < n) {
            arr_low[idx_low] = arr[i];
            idx_low++;
        }
        else {
            arr_high[idx_high] = arr[i];
            idx_high++;
        }
    }

    int min_val = INT_MAX;

    for (int i = 0; i < n; i++) {
        int val = arr_high[i] - arr_low[i];
        min_val = min(min_val, val);
    }
    cout << min_val;
    return 0;
}