#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    bool IsExist = false;
    for (int i = 1; i < n; i++) {
        if (arr[0] != arr[i]) {
            if (arr[i] != arr[i+1]) {
                IsExist = true;
                cout << i + 1;
            }
            break;
        }
    }

    if (!IsExist) {
        cout << -1;
    }
    return 0;
}