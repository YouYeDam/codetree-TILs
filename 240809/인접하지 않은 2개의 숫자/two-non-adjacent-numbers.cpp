#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 2; j < n; j++) {
            if (arr[i] + arr[j] > max_val) {
                max_val = arr[i] + arr[j];
            }
        }
    }
    cout << max_val;
    return 0;
}