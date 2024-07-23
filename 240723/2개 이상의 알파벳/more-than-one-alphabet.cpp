#include <iostream>
#include <string>
using namespace std;

void CheckCondition(string &str) {
    bool IsDiff = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != str[i+1]) {
            IsDiff = true;
            break;
        }
    }

    if (IsDiff) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
int main() {
    string str;
    cin >> str;

    CheckCondition(str);
    return 0;
}