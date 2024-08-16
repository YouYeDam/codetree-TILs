#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;
    int arr[1000][2];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int max_num = 0;

    for (int i = 0; i < n; i++) {
        int new_arr[1000];
        for (int j = 0; j < n; j++) {
            if (i == j) {
                new_arr[j] = arr[j][0] / 2 + arr[j][1];
            }
            else {
                new_arr[j] = arr[j][0] + arr[j][1];
            }
        }

        sort(new_arr, new_arr + n);

        int sum = 0;

        for (int j = 0; j < n; j++) {
            sum += new_arr[j];
            if (sum > b) {
                max_num = max(max_num, n - 1);
                break;
            }
        }
    }
    cout << max_num;
    return 0;
}