#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min_sum = INT_MAX;

    for (int i = 0; i <= 83; i++) {
        int min_height = i;
        int max_height = i+17;
        int sum = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] < min_height) {
                sum += (min_height - arr[j]) * (min_height - arr[j]);
            }
            if (arr[j] > max_height) {
                sum += (arr[j] - max_height) * (arr[j] - max_height);
            }
        }

        min_sum = min(min_sum, sum);
    }
    cout << min_sum;
    return 0;
}