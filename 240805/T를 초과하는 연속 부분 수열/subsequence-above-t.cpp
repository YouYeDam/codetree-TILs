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

    for (int i = 0; i < n; i++) {
        if (arr[i] > t && arr[i + 1] > arr[i]) {
            cnt++;
        }
        else {
            if (arr[i] > t && cnt > max_val) {
                max_val = cnt;
            }
            cnt = 1;
        }
    }
    cout << max_val;
    return 0;
}