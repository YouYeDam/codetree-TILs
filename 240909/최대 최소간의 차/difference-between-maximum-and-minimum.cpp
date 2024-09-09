#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[100];

    int max_num = INT_MIN;
    int min_num = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        max_num = max(max_num, arr[i]);
        min_num = min(min_num, arr[i]);
    }
    int min_val = INT_MAX;

    for (int i = min_num; i <= max_num; i++) {
        int tmin_num = i;
        int tmax_num = i + k;

        int val = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] > tmax_num) {
                val += arr[j] - tmax_num;
            }
            else if (arr[j] < tmin_num) {
                val += tmin_num - arr[j];
            }
        }
        min_val = min(min_val, val);
    }

    cout << min_val;
    return 0;
}