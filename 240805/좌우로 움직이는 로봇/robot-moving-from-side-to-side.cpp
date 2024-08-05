#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr_a[2000001] = {};
    int arr_b[2000001] = {};

    int pos_a = 1000000;
    int time_a = 0;

    for (int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;

        for (int j = time_a + 1; j <= time_a + t; j++) {
            if (d == 'L') {
                pos_a--;
                arr_a[j] = pos_a;
            }
            else {
                pos_a++;
                arr_a[j] = pos_a;
            }
        }
        time_a += t;
    }

    int pos_b = 1000000;
    int time_b = 0;

    for (int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        for (int j = time_b + 1; j <= time_b + t; j++) {
            if (d == 'L') {
                pos_b--;
                arr_b[j] = pos_b;
            }
            else {
                pos_b++;
                arr_b[j] = pos_b;
            }
        }
        time_b += t;
    }

    int cnt = 0;
    int time;

    if (time_a >= time_b) {
        time = time_a;
        for (int i = time_b + 1; i <= time_a; i++) {
            arr_b[i] = pos_b;
        }
    }
    else {
        time = time_b;
        for (int i = time_a + 1; i <= time_b; i++) {
            arr_a[i] = pos_a;
        }
    }

    for (int i = 1; i <= time; i++) {
        if (arr_a[i - 1] != arr_b[i - 1]) {
            if (arr_a[i] == arr_b[i]) {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}