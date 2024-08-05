#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1001];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = 1;
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i+1] > arr[i]) {
            cnt++;
        }
        else {
            if (cnt > max_val) {
                max_val = cnt;
            }
            cnt = 1;
        }
    }
    cout << max_val;
    return 0;
}