#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    int min_val = INT_MAX;

    for (int i = 1; i < n - 1; i++) { // 건너뛰는 지점
        int sum = 0;
        for (int j = 0; j < n - 1; j++) {
            if (j + 1 == i) {
                sum += abs(arr[j + 2][0] - arr[j][0]) + abs(arr[j + 2][1] - arr[j][1]);
                j++;
            }
            else {
                sum += abs(arr[j + 1][0] - arr[j][0]) + abs(arr[j + 1][1] - arr[j][1]);
            }
        }
        if (sum < min_val) {
            min_val = sum;
        }
    }
    cout << min_val;
    return 0;
}