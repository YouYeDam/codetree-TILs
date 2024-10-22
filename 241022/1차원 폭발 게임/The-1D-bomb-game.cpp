#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (true) {
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = i; j < n; j++) {
                if (arr[i] == arr[j]) {
                    cnt++;

                    if (j == n - 1 && cnt >= m) {
                        for (int k = i; k <= j; k++) {
                            arr[k] = 0;
                        }
                        break;
                    }
                }
                else {
                    if (cnt >= m) {
                        for (int k = i; k < j; k++) {
                            arr[k] = 0;
                        }
                    }
                    i = j - 1;
                    break;
                }
            }
        }

        int tmp_arr[100];
        int tmp_idx = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                tmp_arr[tmp_idx] = arr[i];
                tmp_idx++;
            }
        }
        bool IsRemain = false;

        for (int i = 0; i < tmp_idx; i++) {
            int cnt = 0;
            for (int j = i; j < tmp_idx; j++) {
                if (tmp_arr[i] == tmp_arr[j]) {
                    cnt++;

                    if (j == tmp_idx - 1 && cnt >= m) {
                        IsRemain = true;
                    }
                }
                else {
                    if (cnt >= m) {
                        IsRemain = true;
                    }
                    i = j - 1;
                    break;
                }
            }

            if (IsRemain) {
                break;
            }
        }

        for (int i = 0; i < tmp_idx; i++) {
            arr[i] = tmp_arr[i];
        }
        n = tmp_idx;
        
        if (!IsRemain) {
            break;
        }
    }
    
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}