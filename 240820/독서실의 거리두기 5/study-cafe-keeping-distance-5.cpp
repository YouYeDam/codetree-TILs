#include <iostream>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    int max_diff = INT_MIN;

    for (int i = 0; i < n; i++) {
        string new_str = str;
        if (new_str[i] == '1') {
            continue;
        }

        new_str[i] = '1';
        int min_diff = INT_MAX;
        int idx;

        for (int j = 0; j < n; j++) {
            if (new_str[j] == '1') {
                idx = j;
                break;
            }
        }

        for (int j = idx + 1; j < n; j++) {
            if (new_str[j] == '1') {
                int diff = j - idx;
                min_diff = min(min_diff, diff);
                idx = j;
            }
        }
        max_diff = max(max_diff, min_diff);
    }
    cout << max_diff;
    return 0;
}