#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    a = arr[0], b = arr[1], c = arr[2];

    if (a == b - 1 && b == c - 1) {
        cout << 0;
    }
    else if (a == b - 1 || b == c - 1) {
        cout << 2;
    }
    else if (a == b - 2 || b == c - 2) {
        cout << 1;
    }
    else {
        cout << 2;
    }
    return 0;
}