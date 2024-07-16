#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[j] - arr[i] > max_val) {
                max_val = arr[j] - arr[i];
            }
        }
    }
    cout << max_val;
    
    return 0;
}