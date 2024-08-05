#include <iostream>
using namespace std;

int main() {
    int arr_a[1000001];
    int arr_b[1000001];

    arr_a[0] = 0;
    arr_b[0] = 0;

    int n, m;
    cin >> n >> m;

    int pos_a = 0;
    int t_a = 0;

    for (int i = 0; i < n; i++) {
        char d;
        int t;
        cin >> d >> t;

        for (int j = t_a + 1; j <= t_a + t; j++) {
            if (d == 'L') {
                pos_a--;
                arr_a[j] = pos_a;
            }
            else {
                pos_a++;
                arr_a[j] = pos_a;
            }
        }
        t_a = t_a + t;
    }

    int pos_b = 0;
    int t_b = 0;

    for (int i = 0; i < m; i++) {
        char d;
        int t;
        cin >> d >> t;

        for (int j = t_b + 1; j <= t_b + t; j++) {
            if (d == 'L') {
                pos_b--;
                arr_b[j] = pos_b;
            }
            else {
                pos_b++;
                arr_b[j] = pos_b;
            }
        }
        t_b = t_b + t;
    }
    
    bool IsExist = false;
    for (int i = 1; i <= t_a; i++) {
        if (arr_a[i] == arr_b[i]) {
            cout << i;
            IsExist = true;
            break;
        }
    }
    if (!IsExist) {
        cout << -1;
    }
    return 0;
}