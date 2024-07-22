#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int len = a.length();

    for (int i = 0; i < b.length(); i++) {
        if (b[i] == 'L') {
            a = a.substr(1, len - 1) + a.substr(0, 1);
        }
        else {
            a = a.substr(len - 1, 1) + a.substr(0, len - 1);
        }
    }
    cout << a;
    return 0;
}