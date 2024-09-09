#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    int max_dis = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            continue;
        }
        string new_str = str;
        new_str[i] = '1';
        int st_idx;

        for (int j = 0; j < n; j++) {
            if (new_str[j] == '1') {
                st_idx = j;
                break;
            }
        }
        int min_dis = INT_MAX;
        int dis = 1;

        for (int j = st_idx + 1; j < n; j++) {
            if (new_str[j] == '1') {
                min_dis = min(min_dis, dis);
                dis = 1;
            }
            else {
                dis++;
            }
        }
        max_dis = max(max_dis, min_dis);
    }
    cout << max_dis;
    return 0;
}