#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length()-1;

    str.erase(1, 1);
    str.erase(len - 2, 1);
    cout << str;
    return 0;
}