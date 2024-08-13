#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10][3];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    int res_cnt = 0;

    for (int i = 111; i <= 999; i++) {
        int cnt = 0;

        int a1 = i / 100;
        int a2 = (i % 100) / 10;
        int a3 = (i % 100) % 10;

        if (a1 == a2 || a1 == a3 || a2 == a3) {
            continue;
        }
        if (a1 == 0 || a2 == 0 || a3 == 0) {
            continue;
        }
        for (int j = 0; j < n; j++) {
            int st = 0;
            int bl = 0;
            int x = arr[j][0];

            int b1 = x / 100;
            int b2 = (x % 100) / 10;
            int b3 = (x % 100) % 10;


            if (a1 == b1) {
                st++;
            }
            if (a1 == b2) {
                bl++;
            }
            if (a1 == b3) {
                bl++;
            }

            if (a2 == b2) {
                st++;
            }
            if (a2 == b1) {
                bl++;
            }
            if (a2 == b3) {
                bl++;
            }

            if (a3 == b3) {
                st++;
            }
            if (a3 == b1) {
                bl++;
            }
            if (a3 == b2) {
                bl++;
            }

            if (st == arr[j][1] && bl == arr[j][2]) {
            cnt++;
            }
        }

        if (cnt == n) {
            res_cnt++;
        }
    }
    cout <<res_cnt;

    return 0;
}