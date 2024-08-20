#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr_x[100];
    int arr_y[100];

    for (int i = 0; i < n; i++) {
        cin >> arr_x[i] >> arr_y[i];
    }

    int min_val = INT_MAX;

    for (int i = 0; i <= 100; i+=2) {
        for (int j = 0; j <= 100; j+=2) {
            int n1_cnt = 0, n2_cnt = 0, n3_cnt = 0, n4_cnt = 0;
            int max_val = 0;

            for (int k = 0; k < n; k++) {
                if (arr_x[k] > i && arr_y[k] > j) {
                    n1_cnt++;
                    max_val = max(max_val, n1_cnt);
                }
                else if (arr_x[k] < i && arr_y[k] > j) {
                    n2_cnt++;
                    max_val = max(max_val, n2_cnt);
                }
                else if (arr_x[k] < i && arr_y[k] < j) {
                    n3_cnt++;
                    max_val = max(max_val, n3_cnt);
                }
                else if (arr_x[k] > i && arr_y[k] < j) {
                    n4_cnt++;
                    max_val = max(max_val, n4_cnt);
                }
            }
            min_val = min(min_val, max_val);
        } 
    }
    cout << min_val;
    return 0;
}