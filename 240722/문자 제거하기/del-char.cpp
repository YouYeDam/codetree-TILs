#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int len = str.length();

    for (int i = 0; i < len; i++) {
        int n;
        cin >> n;
        
        int cur_len = str.length();

        if (n >= cur_len) {
            n = cur_len - 1;
        }

        str.erase(n, 1);
        cout << str << endl;
    }
    return 0;
}