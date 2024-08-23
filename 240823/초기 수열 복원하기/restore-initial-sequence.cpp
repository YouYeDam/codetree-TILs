#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < arr[0]; i++) {
        int new_arr[1000] = {i, };
        int idx = 0;
        int n_idx = 1;
        int a = i;

        for (int j = 0; j < n - 1; j++) {
            bool IsExist = false;
            for (int k = 1; k < arr[idx]; k++) {
                bool IsOK = true;
                for (int l = 0; l < n_idx; l++) {
                    if (k == new_arr[l]) {
                        IsOK = false;
                        break;
                    }
                }
                if (!IsOK) {
                    continue;
                }

                if (a + k == arr[idx]) {
                    new_arr[n_idx] = k;
                    idx++;
                    n_idx++;
                    a = k;
                    IsExist = true;
                    break;
                }
            }
            if (!IsExist) {
                break;
            }
        }

        bool IsSame = true;
        for (int j = 0; j < n - 1; j++) {
            if (new_arr[j] + new_arr[j + 1] != arr[j]) {
                IsSame = false;
                break;
            }
        }
        if (IsSame) {
            for (int j = 0; j < n; j++) {
                cout << new_arr[j] << " ";
            }
            break;
        }
    }
    return 0;
}