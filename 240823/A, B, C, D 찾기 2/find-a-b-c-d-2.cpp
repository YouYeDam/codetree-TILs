#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[15];

    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 15);

    int a = arr[0];
    int abcd = arr[14];
    int bcd = arr[13];
    int acd = arr[12];
    int abd = arr[11];

    int c = bcd - abd + a;
    int d = acd - a - c;
    int b = abcd - a - c - d;

    cout << a << " " << b << " " << c << " " << d;

    return 0;
}