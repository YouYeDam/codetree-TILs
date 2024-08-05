#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_num = INT_MIN;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] == arr[i - 1]) {
            cnt++;
        }
        else {
            if (cnt > max_num) {
                max_num = cnt;
                cnt = 1;
            }
        }
    }
    cout << max_num;
    return 0;
}