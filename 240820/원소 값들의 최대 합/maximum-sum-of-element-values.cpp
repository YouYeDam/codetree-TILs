#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[101];

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int max_sum = 0;

    for (int i = 1; i <= n; i++) {
        int temp_arr[101]; 

        for (int j = 1; j <= n; j++) {
            temp_arr[j] = arr[j];
        }
        int temp = temp_arr[i];
        int idx = temp;
        int sum = 0;

        for (int j = 0; j < m; j++) {
            temp = temp_arr[idx];
            temp_arr[idx] = idx;
            sum += idx;
            idx = temp;
        }

        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
    return 0;
}