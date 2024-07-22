#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();

    cout << str.substr(1, len - 1) + str.substr(0, 1);
    
    return 0;
}