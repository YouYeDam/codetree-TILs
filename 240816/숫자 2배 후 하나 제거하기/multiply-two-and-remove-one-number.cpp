#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_sum = INT_MAX;

    for (int i = 0; i < n; i++) { // 2배
        for (int j = 0; j < n; j++) { // 삭제
            int new_arr[100] = {};
            for (int k = 0; k < n; k++) {
                if (k == i) {
                    new_arr[k] = arr[k] * 2;
                }
                else {
                    new_arr[k] = arr[k];
                }
            }

            int sum = 0;
            int new_n = n;

            for (int k = j; k < new_n - 1; k++) {
                new_arr[k] = new_arr[k+1];
            }
            new_arr[new_n - 1] = 0;
            new_n--;

            for (int k = 0; k < new_n - 1; k++) {
                sum += abs(new_arr[k] - new_arr[k+1]);
            }

            min_sum = min(min_sum, sum);
        }
    }
    cout << min_sum;
    return 0;
}