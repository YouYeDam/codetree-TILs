#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int arr[101] = {};

    for (int i = a; i <= b; i++) {
        arr[i] = 1;
    }

    for (int i = c; i <= d; i++) {
        arr[i] = 1;
    }

    int cnt = 0;

    for (int i = 0; i <= 100; i++) {
        if (arr[i] == 1) {
            cnt++;
        }
    }

    if (b >= c || d >= a) {
        cnt--;
    }
    else {
        cnt-=2;
    }
    cout << cnt;
    return 0;
}