#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1001] = {};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[x]++;
    }

    int max_val = -1;

    for (int i = 1; i <= 1000; i++) {
        if (arr[i] == 1) {
            if (i > max_val) {
                max_val = i;
            }
        }
    }

    cout << max_val;
    return 0;
}