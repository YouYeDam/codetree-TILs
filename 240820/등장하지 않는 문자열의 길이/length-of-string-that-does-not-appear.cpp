#include <iostream>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;

    int res = 0;
    for (int len = 1; len <= n; len++) {
        bool IsExist = false;
        for (int i = 0; i <= n - len; i++) {
            string new_str;
            for (int j = i; j < i + len; j++) {
                new_str += str[j];
            }
            
            for (int j = i + 1; j <= n - len; j++) {
                string comp_str;
                for (int k = j; k < j + len; k++) {
                    comp_str += str[k];
                }
                if (new_str == comp_str) {
                    IsExist = true;
                }
            }
        }
        if (IsExist) {
            res = len + 1;
        }
    }
    cout << res;
    return 0;
}