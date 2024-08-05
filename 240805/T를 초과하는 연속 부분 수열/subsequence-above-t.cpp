#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int arr[1001];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = 0;
    int cnt;


    if (arr[0] > t) {
        cnt = 1;
    }
    else {
        cnt = 0;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > t) {
            if (arr[i + 1] > arr[i]) {
                cnt++;
            }
            else {
                if (cnt > max_val) {
                    max_val = cnt;
                }

                if (arr[i + 1] > t) {
                    cnt = 1;
                }
                else {
                    cnt = 0;
                }
            }
        }
        else {
            if (cnt > max_val) {
                max_val = cnt;
            }
            if (arr[i + 1] > t) {
                cnt = 1;
            }
            else {
                cnt = 0;
            }
        }
    }

    cout << max_val;
    return 0;
}