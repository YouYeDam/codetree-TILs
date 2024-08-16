#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, b;
    int arr[1000][3];
    int new_arr[1000][3];
    cin >> n >> b;

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
        arr[i][2] = arr[i][0] + arr[i][1];
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int min_val = INT_MAX;
        int min_num;

        for (int j = 0; j < n; j++) {
            if (arr[j][2] < min_val) {
                min_val = arr[j][2];
                min_num = j;
            }
        }

        new_arr[cnt][0] = arr[min_num][0];
        new_arr[cnt][1] = arr[min_num][1];
        new_arr[cnt][2] = arr[min_num][2];
        cnt++;

        arr[min_num][2] = INT_MAX;
    }

    int max_num = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum += new_arr[j][0] / 2;
            }
            else {
                sum += new_arr[j][0];
            }
            sum += new_arr[j][1];
            cnt++;
        }
        if (sum > b) {
            max_num = max(max_num, cnt - 1);
        }
    }

    cout << max_num;
    return 0;
}