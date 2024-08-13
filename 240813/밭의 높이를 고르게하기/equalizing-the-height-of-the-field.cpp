#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n, h, t;
    cin >> n >> h >> t;

    int arr[101];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_val = INT_MAX;

    for (int i = 0; i <= n - t; i++) {
        int val = 0;
        for (int j = i; j < i + t; j++) {
            if (arr[j] < h) {
                val += h - arr[j];
            }
            else if (arr[j] > h) {
                val += arr[j] - h;
            }
        }
        min_val = min(min_val, val);
    }
    cout << min_val;
    return 0;
}