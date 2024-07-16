#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int spot_i = n;

    while (true) {
        int max_val = 0;
        int max_i = 0;

        for (int i = 0; i < spot_i; i++) {
            if (arr[i] > max_val) {
                max_val = arr[i];
                max_i = i;
            }
        }

        cout << max_i + 1 << " ";
        spot_i = max_i;
        if (spot_i == 0) {
            break;
        }
    }

    return 0;
}