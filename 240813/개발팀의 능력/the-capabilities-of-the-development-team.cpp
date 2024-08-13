#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int min_diff = INT_MAX;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int p = 0; p < 4; p++) {
                for (int q = p + 1; q < 5; q++) {
                    if (p == i || p == j || q == i || q == j) {
                        continue;
                    }
                    int sum_arr[3];

                    sum_arr[0] = arr[i] + arr[j];
                    sum_arr[1] = arr[p] + arr[q];
                    sum_arr[2] = sum - sum_arr[0] - sum_arr[1];

                    if (sum_arr[0] == sum_arr[1] || sum_arr[0] == sum_arr[2] || sum_arr[1] == sum_arr[2]) {
                        continue;
                    }

                    int max_val = INT_MIN;
                    int min_val = INT_MAX;
                    for (int k = 0; k < 3; k++) {
                        if (sum_arr[k] > max_val) {
                            max_val = sum_arr[k];
                        }
                        if (sum_arr[k] < min_val) {
                            min_val = sum_arr[k];
                        }
                    }

                    if (max_val - min_val < min_diff) {
                        min_diff = max_val - min_val;
                    }
                }
            }
        }
    }
    if (min_diff == INT_MAX) {
        cout << -1;
    }
    else {
        cout << min_diff;
    }
    
    return 0;
}