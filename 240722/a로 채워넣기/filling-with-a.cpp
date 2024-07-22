#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    str[1] = 'a';
    int len = str.length();
    str[len-2] = 'a';
    cout << str;
    return 0;
}