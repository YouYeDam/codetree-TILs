#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res_cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            int cnt = j - i + 1;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            float avg = (float)sum / cnt;

            for (int k = i; k <= j; k++) {
                if (avg == arr[k]) {
                    res_cnt++;
                    break;
                }
            }
        }
    }
    cout << res_cnt;
    return 0;
}