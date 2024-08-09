#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1003];
    int min_val = INT_MAX;
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
    }

    for (int i = 0; i < n; i++) {
        int sum = 0;
        int dis = 0;
        for (int j = i; j < n; j++) {
            sum += dis * arr[j];
            dis++;
        }
        for (int k = 0; k <= i - 1; k++) {
            sum += dis * arr[k];
            dis++;
        }
        if (sum < min_val) {
            min_val = sum;
        }
    }
    cout << min_val;
    return 0;
}