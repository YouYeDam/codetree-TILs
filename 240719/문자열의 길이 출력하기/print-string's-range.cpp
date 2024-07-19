#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int str1_len, str2_len;
    str1_len = str1.length();
    str2_len = str2.length();
    cout << str1_len + str2_len;
    return 0;
}