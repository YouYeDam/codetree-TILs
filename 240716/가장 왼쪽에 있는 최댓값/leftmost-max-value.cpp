#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1001];

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
    }
    int spot_i = n;

    while (true) {
        int max_val = 0;
        int max_i = 1;

        for (int i = 1; i < spot_i; i++) {
            if (arr[i] > max_val) {
                max_val = arr[i];
                max_i = i;
            }
        }

        cout << max_i << " ";
        spot_i = max_i;
        if (spot_i == 1) {
            break;
        }
    }

    return 0;
}