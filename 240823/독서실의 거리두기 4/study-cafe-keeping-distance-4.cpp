#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    string str;
    cin >> str;

    for (int i = 0; i < n; i++) {
        arr[i] = str[i] - '0';
    }

    int max_dis = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || arr[i] == 1 || arr[j] == 1) {
                continue;
            }

            int new_arr[100];

            for (int k = 0; k < n; k++) {
                new_arr[k] = arr[k];
            }
            new_arr[i] = 1;
            new_arr[j] = 1;

            int start = 0;
            for (int k = 0; k < n; k++) {
                if (new_arr[k] == 1) {
                    start = k;
                    break;
                }
            }

            int dis = 1;
            int min_dis = INT_MAX;
            for (int k = start + 1; k < n; k++) {
                if (new_arr[k] == 1) {
                    min_dis = min(min_dis, dis);
                    dis = 1;
                }
                else {
                    dis++;
                }
            }

            max_dis = max(max_dis, min_dis);
        }
    }
    cout << max_dis;
    return 0;
}