#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100][2];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }
    int max_width = INT_MIN;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int x1 = arr[i][0], x2 = arr[j][0], x3 = arr[k][0];
                int y1 = arr[i][1], y2 = arr[j][1], y3 = arr[k][1];

                if (x1 != x2 && x1 != x3 && x2 != x3) {
                    continue;
                }
                if (y1 != y2 && y1 != y3 && y2 != y3) {
                    continue;
                }
                
                int width = abs((x1*y2 + x2*y3 + x3*y1) - (x2*y1 + x3*y2 + x1*y3));

                max_width = max(max_width, width);
            }
        }
    }
    cout << max_width;
    return 0;
}