#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100] = {};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }

            if (j < i) {
                sum += (i - j) * arr[j];
            }
            else {
                sum += (j - i) * arr[j];
            }
        }

        if (sum < min_val) {
            min_val = sum;
        }
    }

    cout << min_val;
    return 0;
}