#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int x = str[i] - ('a' - 'A');
            cout << (char)x;
        }
        else {
            int x = str[i] + ('a' - 'A');
            cout << (char)x;
        }
    }
    return 0;
}