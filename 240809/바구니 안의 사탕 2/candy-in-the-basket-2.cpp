#include <iostream>
#include <algorithm>
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

    int max_val = 0;

    for (int i = k; i <= 101 - k; i++) {
        int c = i;
        int sum = 0;
        for (int j = c - k; j <= c + k; j++) {
            sum += arr[j];
        }
        max_val = max(max_val, sum);
    }
    cout << max_val;
    return 0;
}