#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string new_str = "";
    for (int i = 0; i < str.length(); i++) {
        if (i % 2 == 1) {
            new_str += str[i];
        }
    }

    for (int i = new_str.length() - 1; i >= 0; i--) {
        cout << new_str[i];
    }
    return 0;
}