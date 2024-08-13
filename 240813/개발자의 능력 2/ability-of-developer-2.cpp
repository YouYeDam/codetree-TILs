#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int arr[6];
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int min_diff = INT_MAX;


    for (int i = 0; i < 5; i++) {
        for (int j = i+1; j < 6; j++) {
            for (int k = 0; k < 5; k++) {
                for (int p = k+1; p < 6; p++) {
                    if (k == i || k == j || p == i || p == j) {
                        continue;
                    }
                    int sum_arr[3];

                    sum_arr[0] = arr[i] + arr[j];
                    sum_arr[1] = arr[k] + arr[p];
                    sum_arr[2] = sum - sum_arr[0] - sum_arr[1];

                    int max_val = INT_MIN;
                    int min_val = INT_MAX;

                    for (int q = 0; q < 3; q++) {
                        if (sum_arr[q] > max_val) {
                            max_val = sum_arr[q];
                        }
                        if (sum_arr[q] < min_val) {
                            min_val = sum_arr[q];
                        }
                    }

                    if (max_val - min_val < min_diff) {
                        min_diff = max_val - min_val;
                    }
                }
            }
        }
    }
    cout << min_diff;
    return 0;
}