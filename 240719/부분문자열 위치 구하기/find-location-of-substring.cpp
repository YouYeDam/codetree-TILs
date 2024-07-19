#include <iostream>
#include <string>
using namespace std;

int main() {
    string input_str, obj_str;
    cin >> input_str >> obj_str;
    bool IsExist = false;

    for (int i = 0; i <= input_str.length() - obj_str.length(); i++) {
        if(input_str.substr(i, obj_str.length()) == obj_str) {
            cout << i;
            IsExist = true;
            break;
        }
    }
    if (IsExist == false) {
        cout << -1;
    }
    return 0;
}