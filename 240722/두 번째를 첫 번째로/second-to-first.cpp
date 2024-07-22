#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    char fir = str[0];
    char sec = str[1];

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == sec) {
            str[i] = fir;
        }
    }
    cout << str;
    return 0;
}