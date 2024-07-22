#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int n = 0;
    bool IsExist = false;
    for (int i = 0; i < a.length(); i++) {
        a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
        n++;
        if (a == b) {
            cout << n;
            IsExist = true;
            break;
        }
    }

    if (IsExist == false) {
        cout << -1;
    }
    return 0;
}