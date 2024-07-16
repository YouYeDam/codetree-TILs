#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10];
    int min_val = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] >= arr[j]) {
                if (arr[i] - arr[j] < min_val) {
                    min_val = arr[i] - arr[j];
                }
            }
            else {
                if (arr[j] - arr[i] < min_val) {
                    min_val = arr[j] - arr[i];
                }
            }
        }
    }
    cout << min_val;
    return 0;
}