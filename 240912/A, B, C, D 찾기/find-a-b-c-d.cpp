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
    int b = arr[1];
    int ab = a + b;

    int abd = arr[11];
    int d = abd - ab;
    int acd = arr[12];
    int c = acd - a - d;
    int bcd = arr[13];
    int cd = bcd - b;

    int abcd = arr[14];
    
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}