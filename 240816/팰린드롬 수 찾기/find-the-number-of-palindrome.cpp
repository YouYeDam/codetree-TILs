#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int cnt = 0;

    for (int i = x; i <= y; i++) {
        string str = to_string(i);
        string rev_str = "";

        for (int j = str.length() - 1; j >= 0; j--) {
            rev_str += str[j];
        }

        if (str == rev_str) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}