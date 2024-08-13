#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr1[3];
    int arr2[3];
    int arr1_a[5];
    int arr1_b[5];
    int arr1_c[5];
    int arr2_a[5];
    int arr2_b[5];
    int arr2_c[5];

    for (int i = 0; i < 3; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> arr2[i];
    }
    if (n >= 5) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 5; j++) {
                int x = arr1[i];
                if (x + j - 2 <= 0) {
                    if (i == 0) {
                        arr1_a[j] = x + j - 2 + n;
                    }
                    else if (i == 1) {
                        arr1_b[j] = x + j - 2 + n;
                    }
                    else {
                        arr1_c[j] = x + j - 2 + n;
                    }
                }
                else if (x + j - 2 > n) {
                    if (i == 0) {
                        arr1_a[j] = x + j - 2 - n;
                    }
                    else if (i == 1) {
                        arr1_b[j] = x + j - 2 - n;
                    }
                    else {
                        arr1_c[j] = x + j - 2 - n;
                    }
                }
                else {
                    if (i == 0) {
                        arr1_a[j] = x + j - 2;
                    }
                    else if (i == 1) {
                        arr1_b[j] = x + j - 2;
                    }
                    else {
                        arr1_c[j] = x + j - 2;
                    }
                }
            }
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 5; j++) {
                int x = arr2[i];
                if (x + j - 2 <= 0) {
                    if (i == 0) {
                        arr2_a[j] = x + j - 2 + n;
                    }
                    else if (i == 1) {
                        arr2_b[j] = x + j - 2 + n;
                    }
                    else {
                        arr2_c[j] = x + j - 2 + n;
                    }
                }
                else if (x + j - 2 > n) {
                    if (i == 0) {
                        arr2_a[j] = x + j - 2 - n;
                    }
                    else if (i == 1) {
                        arr2_b[j] = x + j - 2 - n;
                    }
                    else {
                        arr2_c[j] = x + j - 2 - n;
                    }
                }
                else {
                    if (i == 0) {
                        arr2_a[j] = x + j - 2;
                    }
                    else if (i == 1) {
                        arr2_b[j] = x + j - 2;
                    }
                    else {
                        arr2_c[j] = x + j - 2;
                    }
                }
            }
        } 
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (arr1_a[i] == arr2_a[j]) {
                    cnt1++;
                }
                if (arr1_b[i] == arr2_b[j]) {
                    cnt2++;
                }
                if (arr1_c[i] == arr2_c[j]) {
                    cnt3++;
                }
            }
        }
        int prod = cnt1 * cnt2 * cnt3;
        int sum = 250 - prod;
        cout << sum;
    }
    else {
        cout << n * n * n;
    }
    return 0;
}