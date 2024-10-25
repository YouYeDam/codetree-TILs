#include <iostream>
using namespace std;

int n;
int arr[46] = {};

int main() {
    cin >> n;

    arr[1] = 1;
    arr[2] = 1;

    for (int i = 3; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[n];
    return 0;
}