#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100][2];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    int min_len = INT_MAX;

    for (int i = 0; i < n; i++) {
        int max_x = INT_MIN;
        int min_x = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                continue;
            }
            min_x = min(min_x, arr[j][0]);
            max_x = max(max_x, arr[j][1]);
        }
        int len = max_x - min_x;
        min_len = min(min_len, len);
    }
    cout << min_len;
    return 0;
}