#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[101] = {};

    for (int i = 0; i < n; i++) {
        int cnt, pos;
        cin >> cnt >> pos;
        arr[pos] += cnt;
    }

    int max_val = INT_MIN;
    int c = -1;
    for (int i = 0; i <= 200; i++) {
        int sum = 0;
        for (int j = i - k; j <= i + k; j++) {
            if (j < 0 || j > 100) {
                continue;
            }
            sum += arr[j];
        }

        if (sum > max_val) {
            max_val = sum;
            c = i;
        }
    }
    cout << max_val;
    return 0;
}