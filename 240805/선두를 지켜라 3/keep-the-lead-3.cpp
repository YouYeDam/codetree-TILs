#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr_a[1000001] = {0, };
    int arr_b[1000001] = {0, };

    int pos_a = 0;
    int time_a = 0;

    for (int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        for (int j = time_a + 1; j <= time_a + t; j++) {
            pos_a += v;
            arr_a[j] = pos_a;
        }
        time_a += t;
    }

    int pos_b = 0;
    int time_b = 0;

    for (int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        for (int j = time_b + 1; j <= time_b + t; j++) {
            pos_b += v;
            arr_b[j] = pos_b;
        }
        time_b += t;
    }

    char cur_com = 'c';
    char prev_com = 'c';
    int cnt = 0;

    for (int i = 1; i <= time_a; i++) {
        if (arr_a[i] > arr_b[i]) {
            cur_com = 'a';
        }
        else if (arr_b[i] > arr_a[i]) {
            cur_com = 'b';
        }
        else {
            cur_com = 'c';
        }

        if (prev_com != cur_com) {
            cnt++;
        }
        prev_com = cur_com;
    }
    cout << cnt;
    return 0;
}