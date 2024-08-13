#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, b;
    cin >> n >> b;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int max_cnt = 0;

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        int sum = 0;

        for (int j = 0; j < n; j++) {
            if (j == i) {
                sum += arr[j] / 2;
            }
            else {
                sum += arr[j];
            }
            cnt++;
            if (sum > b) {
                cnt--;
                break;
            }
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}