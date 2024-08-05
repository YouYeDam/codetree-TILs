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
    int cnt = 1;
    bool IsExist = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] > t && arr[i + 1] > arr[i]) {
            cnt++;
            IsExist = true;
        }
        else {
            if (cnt > max_val) {
                max_val = cnt;
            }
            cnt = 1;
        }
    }
    if (IsExist == false) {
        max_val = 0;
    }
    cout << max_val;
    return 0;
}