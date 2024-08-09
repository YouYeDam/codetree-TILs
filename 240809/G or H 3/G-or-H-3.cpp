#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    char arr[10001] = {};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cin >> arr[x];
    }

    int max_val = 0;

    for (int i = 1; i <= 10001 - k; i++) {
        int sum = 0;
        for (int j = i; j <= i + k; j++) {
            if (arr[j] == 'G') {
                sum += 1;
            }
            else if (arr[j] == 'H') {
                sum += 2;
            }
        }
        max_val = max(max_val, sum);
    }
    cout << max_val;
    return 0;
}