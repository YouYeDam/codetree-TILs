#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ee_exist = false;
    bool ab_exist = false;

    for (int i = 0; i < s.length(); i++) {
        if (s.substr(i, 2) == "ee") {
            ee_exist = true;
        }
        if (s.substr(i, 2) == "ab") {
            ab_exist = true;
        }
    }

    if (ee_exist) {
        cout << "Yes ";
    }
    else {
        cout << "No ";
    }

    if (ab_exist) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}