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

    int min_width = INT_MAX;
    
    for (int i = 0; i < n; i++) {
            int min_x = INT_MAX;
            int min_y = INT_MAX;
            int max_x = INT_MIN;
            int max_y = INT_MIN;

        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }

            min_x = min(min_x, arr[j][0]);
            min_y = min(min_y, arr[j][1]);

            max_x = max(max_x, arr[j][0]);
            max_y = max(max_y, arr[j][1]);
        }
        
        int width = (max_x - min_x) * (max_y - min_y);
        if (width < min_width) {
            min_width = width;
        }
    }
    cout << min_width;
    return 0;
}