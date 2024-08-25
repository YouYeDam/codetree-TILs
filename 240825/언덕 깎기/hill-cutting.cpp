#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int total_val = 0;
    
    while (true) {
        int max_height = INT_MIN;
        int min_height = INT_MAX;
        int max_cnt = 0;
        int min_cnt = 0;
        int max_idx;
        int min_idx;

        for (int i = 0; i < n; i++) {
            if (arr[i] > max_height) {
                max_height = arr[i];
                max_idx = i;
            }
            if (arr[i] < min_height) {
                min_height = arr[i];
                min_idx = i;
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[max_idx]) {
                max_cnt++;
            }
            if (arr[i] == arr[min_idx]) {
                min_cnt++;
            }
        }

        int diff = max_height - min_height;
        int max_height_value = 0;
        int min_height_value = 0;

        while (true) {
            if (min_cnt >= max_cnt) {
                max_height--;
                max_height_value++;
                arr[max_idx]--;
                if (max_height - min_height <= 17) {
                    break;
                }
                min_height++;
                min_height_value++;
                arr[min_idx]++;
                if (max_height - min_height <= 17) {
                    break;
                }
            }
            else {
                min_height++;
                min_height_value++;
                arr[min_idx]++;
                if (max_height - min_height <= 17) {
                    break;
                }
                max_height--;
                max_height_value++;
                arr[max_idx]--;
                if (max_height - min_height <= 17) {
                    break;
                }
            }
        }

        total_val += (max_height_value * max_height_value) + (min_height_value * min_height_value);

        int check_max_height = INT_MIN;
        int check_min_height = INT_MAX;

        for (int i = 0; i < n; i++) {
            check_max_height = max(check_max_height, arr[i]);
            check_min_height = min(check_min_height, arr[i]);
        }
        if (check_max_height - check_min_height <= 17) {
            break;
        }
    }
    cout << total_val;

    return 0;
}