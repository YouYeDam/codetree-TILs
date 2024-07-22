#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            int x = s[i] - 32;
            cout << (char)x;
        }
        else if (s[i] >= 65 && s[i] <= 90) {
            cout << s[i];
        }
    }
    return 0;
}