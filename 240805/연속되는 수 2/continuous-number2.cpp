#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[1001] = {};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = 1;
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1]) {
            cnt++;
        }
        else {
            if (cnt > max) {
                max = cnt;
            }
            cnt = 1;
        }
    }
    cout << max;
    return 0;
}