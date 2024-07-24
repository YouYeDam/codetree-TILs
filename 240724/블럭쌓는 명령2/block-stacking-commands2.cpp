#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[101] = {};

    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;

        for (int j = a; j <= b; j++) {
            arr[j]++;
        }
    }   
    int max_val = 0;

    for (int i = 1; i <= n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    cout << max_val;
    return 0;
}