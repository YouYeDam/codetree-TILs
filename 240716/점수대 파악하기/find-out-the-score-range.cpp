#include <iostream>
using namespace std;

int main() {
    int arr[11] = {};

    for (int i = 0; i < 100; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        else {
            arr[n / 10]++;
        }
    }

    for (int i = 10; i >= 1; i--) {
        cout << i * 10 << " - " << arr[i] << endl;
    }
    return 0;
}