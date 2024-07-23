#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    n *= 2;

    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int max = 0;

    for (int i = 0; i < n/2; i++) {
        if (arr[i] + arr[n-i-1] > max) {
            max = arr[i] + arr[n-i-1];
        }
    }
    cout << max;
    return 0;
}