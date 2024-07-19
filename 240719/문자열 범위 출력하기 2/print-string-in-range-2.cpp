#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;

    cin >> str >> n;

    int cnt = 0;
    int i = str.length()-1;

    if (str.length() <= n) {
        for (int i = str.length()-1; i >= 0; i--) {
            cout << str[i];
        }
    }
    else {
        while (true) {
            if (cnt == n) {
                break;
            }
            cout << str[i];
            i--;
            cnt++;
        }
    }

    return 0;
}