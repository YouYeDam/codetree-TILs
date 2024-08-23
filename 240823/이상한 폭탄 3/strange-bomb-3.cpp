#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[100] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int bomb_num = 0;
    int max_cnt = 0;

    for (int i = 0; i <= 1000000; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                for (int x = j + 1; x <= j + k; x++) {
                    if (arr[x] == i) {
                        cnt++;
                        j = x - 1;
                        break;
                    }
                }
            }
        }
        if (cnt >= max_cnt) {
            max_cnt = cnt;
            bomb_num = i;
        }
    } 
    cout << bomb_num;
    return 0;
}