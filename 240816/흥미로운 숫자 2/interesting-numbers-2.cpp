#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    string arr[1000000];
    int idx = 0;

    for (int i = x; i <= y; i++) {
        string str = to_string(i);
        arr[idx] = str;
        idx++;
    }

    int cnt = 0;
    for (int i = 0; i < idx; i++) {
        int number[10] = {};
        for (int j = 0; j < arr[i].length(); j++) {
            int x = arr[i][j] - '0';
            number[x]++;
        }

        int max_val = 0;
        for (int j = 0; j < 10; j++) {
            max_val = max(max_val, number[j]);
        }

        if (max_val == arr[i].length() - 1) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}