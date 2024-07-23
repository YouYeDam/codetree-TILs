#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr1[100], arr2[100];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    bool IsSame = true;

    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            IsSame = false;
            break;
        }
    }

    if (IsSame) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}