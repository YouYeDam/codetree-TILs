#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100] = {};

    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;

        for (int j = x1; j <= x2; j++) {
            arr[j]++;
        }
    }

    int max_val = 0;
    for (int i = 0; i < 100; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    cout << max_val;
    return 0;
}