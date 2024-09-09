#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr_a[101];
    int arr_b[101];

    for (int i = 0; i < n; i++) {
        cin >> arr_a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr_b[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr_a[i] > arr_b[i]) {
            sum += arr_a[i] - arr_b[i];
            arr_a[i+1] += arr_a[i] - arr_b[i];
        }
    }
    cout << sum;
    return 0;
}