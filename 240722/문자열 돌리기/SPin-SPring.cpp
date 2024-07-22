#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    cout << str << endl;
    
    for (int i = 0; i < str.length(); i++) {
        str = str.substr(len - 1, 1) + str.substr(0, len - 1);
        cout << str << endl;
    }
    return 0;
}