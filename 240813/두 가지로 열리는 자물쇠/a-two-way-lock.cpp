#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr_1[3][5];
    int arr_2[3][5];


    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;

        int x = -2;
        for (int j = 0; j < 5; j++) {
            int res = num + x;
            if (res < 1) {
                res = n + x + num;
            }
            else if (res > n) {
                if (num == n - 1) {
                    res = 1;
                }
                else if (num == n) {
                    res = 0 + x;
                }
            }

            arr_1[i][j] = res;
            x++;
        }
    }

    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;

        int x = -2;
        for (int j = 0; j < 5; j++) {
            int res = num + x;
            if (res < 1) {
                res = n + x + num;
            }
            else if (res > n) {
                if (num == n - 1) {
                    res = 1;
                }
                else if (num == n) {
                    res = 0 + x;
                }
            }

            arr_2[i][j] = res;
            x++;
        }
    }
    int prod = 1;

    for (int i = 0; i < 3; i++) {
        int arr_a[5];
        int arr_b[5];
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            arr_a[j] = arr_1[i][j];
            arr_b[j] = arr_2[i][j];
        }

        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                if (arr_a[j] == arr_b[k]) {
                    sum++;
                }
            }
        }
        prod *= sum;
    }

    cout << 250 - prod;
    return 0;
}