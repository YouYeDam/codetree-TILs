#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[100];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_val = 0;

    for (int i = 0; i < n - k; i++) {
        int sum = arr[i] + arr[i + 1] + arr[i + 2];
        max_val = max(max_val, sum);
    }
    cout << max_val;
    return 0;
}