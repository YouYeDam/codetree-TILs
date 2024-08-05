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
        if (arr[i + 1] > t) {
            cnt++;
        }
        else {
            if (cnt > max_val) {
                max_val = cnt;
            }
            cnt = 0;
        }
    }

    cout << max_val;
    return 0;
}