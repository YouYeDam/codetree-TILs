#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100000];
    int arr_pos[100000];
    int pos_idx = 0;

    int arr_neg[100000];
    int neg_idx = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if (arr[i] >= 0) {
            arr_pos[pos_idx] = arr[i];
            pos_idx++;
        }
        else {
            arr_neg[neg_idx] = arr[i];
            neg_idx++;
        }
    }

    sort(arr_pos, arr_pos + pos_idx);
    sort(arr_neg, arr_neg + neg_idx);

    int p3n0 = INT_MIN;
    int p2n1 = INT_MIN;
    int p1n2 = INT_MIN;
    int p0n3 = INT_MIN;

    if (pos_idx > 2) {
        p3n0 = arr_pos[pos_idx-1] * arr_pos[pos_idx-2] * arr_pos[pos_idx-3];
    }
    
    if (pos_idx > 1 && neg_idx > 0) {
        p2n1 = arr_pos[pos_idx-1] * arr_pos[pos_idx-2] * arr_neg[0];
    }

    if (pos_idx > 0 && neg_idx > 1) {
        p1n2 = arr_pos[pos_idx-1] * arr_neg[0] * arr_neg[1];
    }

    if (neg_idx > 2) {
        p0n3 = arr_neg[0] * arr_neg[1] * arr_neg[2];
    }

    int res_arr[4] = {p3n0, p2n1, p1n2, p0n3};

    int max_val = INT_MIN;

    for (int i = 0; i < 4; i++) {
        max_val = max(max_val, res_arr[i]);
    }

    cout << max_val;
    return 0;
}