#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[11] = {};

    for (int i = 1; i <= 10; i++) {
        arr[i] = 2;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if (arr[a] == 2) {
            arr[a] = b;
        }
        else if (arr[a] != b) {
            arr[a] = b;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}