#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100][2];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int min_dis = INT_MAX;
    int res;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int x1 = arr[i][0];
            int y1 = arr[i][1];
            int x2 = arr[j][0];
            int y2 = arr[j][1];

            int dis = abs(x1 - x2) + abs(y1 - y2);

            if (dis < min_dis) {
                min_dis = dis;
                res = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
            }
        }
    }

    cout << res;
    return 0;
}