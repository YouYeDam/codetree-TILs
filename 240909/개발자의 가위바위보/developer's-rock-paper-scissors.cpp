#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[100];
    int arr2[100];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i] >> arr2[i];
    }
    int max_cnt = 0;
    for (int i = 1; i <= 3; i++) { // 가위
        for (int j = 1; j <= 3; j++) { // 바위
            for (int k = 1; k <= 3; k++) { // 보
                if (i == j || i == k || j == k) {
                    continue;
                }

                int cnt = 0;
                for (int x = 0; x < n; x++) {
                    if (arr1[x] == i) {
                        if (arr2[x] == k) {
                            cnt++;
                        }
                    }
                    else if (arr1[x] == j) {
                        if (arr2[x] == i) {
                            cnt++;
                        }
                    }
                    else if (arr1[x] == k) {
                        if (arr2[x] == j) {
                            cnt++;
                        }
                    }
                }
                max_cnt = max(max_cnt, cnt);
            }
        }
    }
    cout << max_cnt;
    return 0;
}