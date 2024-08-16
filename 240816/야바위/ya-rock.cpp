#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100][3];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    int max_cnt = 0;

    for (int i = 1; i <= 3; i++) {
        int cup[4] = {};
        cup[i] = 1;
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            int tmp = cup[arr[j][0]];
            cup[arr[j][0]] = cup[arr[j][1]];
            cup[arr[j][1]] = tmp;

            if (cup[arr[j][2]] == 1) {
                cnt++;
            }
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}