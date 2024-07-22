#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            cout << str[i];
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            cout << str[i];
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            int x = str[i] + 'a' - 'A';
            cout << (char)x;

        }
    }
    return 0;
}