#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, c, g, h;
    cin >> n >> c >> g >> h;

    int arr[1000][2];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int max_val = 0;

    for (int i = 0; i <= 1000; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i < arr[j][0]) {
                sum += c;
            }
            else if (i >= arr[j][0] && i <= arr[j][1]) {
                sum += g;
            }
            else {
                sum += h;
            }
        }
        max_val = max(max_val, sum);
    }
    cout << max_val;
    return 0;  
}