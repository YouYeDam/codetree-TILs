#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t, a, b;
    cin >> t >> a >> b;

    char arr[1001] = {};

    for (int i = 0; i < t; i++) {
        char alp;
        int pos;
        cin >> alp >> pos;

        arr[pos] = alp;
    }

    int cnt = 0;

    for (int i = a; i <= b; i++) {
        int min_s = INT_MAX;
        int min_n = INT_MAX;

        for (int j = 1; j <= 1000; j++) {
            if (arr[j] == 'S') {
                int dis = abs(i - j);
                min_s = min(min_s, dis);
            }
            if (arr[j] == 'N') {
                int dis = abs(i - j);
                min_n = min(min_n, dis);
            }
        }

        if (min_s <= min_n) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}