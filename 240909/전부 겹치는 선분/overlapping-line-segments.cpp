#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[101] = {};

    for (int i = 0; i < n; i++) {
        int x1, x2;
        cin >> x1 >> x2;

        for (int j = x1; j <= x2; j++) {
            arr[j]++;
        }
    }
    bool IsExist = false;

    for (int i = 1; i <= 100; i++) {
        if (arr[i] == n) {
            IsExist = true;
            break;
        }
    }

    if (IsExist) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}