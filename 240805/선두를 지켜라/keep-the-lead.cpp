#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr_a[1000001] = {0, };
    int arr_b[1000001] = {0, };

    int time_a = 0;
    int pos_a = 0;

    for (int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        for (int j = time_a + 1; j <= time_a + t; j++) {
            arr_a[j] = pos_a + v;
            pos_a += v;
        }
        time_a += t;
    }

    int time_b = 0;
    int pos_b = 0;

    for (int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        for (int j = time_b + 1; j <= time_b + t; j++) {
            arr_b[j] = pos_b + v;
            pos_b += v;
        }
        time_b += t;
    }

    char head = 'N';
    int start = 0;
    for (int i = 0; i < time_a; i++) {
        if (arr_a[i] > arr_b[i]) {
            head = 'A';
            start = i;
            break;
        }
        else if (arr_b[i] > arr_a[i]) {
            head = 'B';
            start = i;
            break;
        }
    }

    int cnt = 0;

    for (int i = start; i < time_a; i++) {
        if (head == 'A' && arr_b[i] > arr_a[i]) {
            cnt++;
            head = 'B';
        }
        else if (head == 'B' && arr_a[i] > arr_b[i]) {
            cnt++;
            head = 'A';
        }
    }
    cout << cnt;
    return 0;
}