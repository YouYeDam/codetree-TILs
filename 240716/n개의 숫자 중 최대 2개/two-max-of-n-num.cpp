#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    int max_val1 = INT_MIN;
    int max_val2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] >= max_val1) {
            max_val2 = max_val1;
            max_val1 = arr[i];
        }
        else if (arr[i] >= max_val2) {
            max_val2 = arr[i];
        }
    }
    cout << max_val1 << " " << max_val2;
    return 0;
}