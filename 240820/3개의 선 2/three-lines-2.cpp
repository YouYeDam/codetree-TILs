#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[20][2];

    int arr_xcnt[11] = {};
    int arr_ycnt[11] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
        arr_xcnt[arr[i][0]] = 1;
        arr_ycnt[arr[i][1]] = 1;
    }

    int x_cnt = 0, y_cnt = 0;

    for (int i = 0; i <= 10; i++) {
        if (arr_xcnt[i] == 1) {
            x_cnt++;
        }
        if (arr_ycnt[i] == 1) {
            y_cnt++;
        }
    }


    bool IsExist = false;

    for (int i = 0; i <= 3; i++) {
        int x = i;
        int y = 3 - i;

        if (x == 0) {
            if (y_cnt <= 3) {
                IsExist = true;
            }
        }

        else if (x == 1) {  
            for (int j = 0; j <= 10; j++) {
                int new_arr_ycnt[11] = {};
                int new_ycnt = 0;
                for (int k = 0; k < n; k++) {
                    if (arr[k][0] != j) {
                        new_arr_ycnt[arr[k][1]] = 1;
                    }
                }

                for (int k = 0; k <= 10; k++) {
                    if (new_arr_ycnt[k] == 1) {
                        new_ycnt++;
                    }
                }

                if (new_ycnt <= 2) {
                    IsExist = true;
                }
            }

        }

        else if (x == 2) {
            for (int j = 0; j <= 10; j++) {
                int new_arr_xcnt[11] = {};
                int new_xcnt = 0;
                for (int k = 0; k < n; k++) {
                    if (arr[k][1] != j) {
                        new_arr_xcnt[arr[k][0]] = 1;
                    }
                }

                for (int k = 0; k <= 10; k++) {
                    if (new_arr_xcnt[k] == 1) {
                        new_xcnt++;
                    }
                }

                if (new_xcnt <= 2) {
                    IsExist = true;
                }
            }
        }

        else if (x == 3) {
            if (x_cnt <= 3) {
                IsExist = true;
            }
        }
    }

    if (IsExist) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}