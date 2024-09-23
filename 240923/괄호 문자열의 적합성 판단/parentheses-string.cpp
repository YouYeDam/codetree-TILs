#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<int> s;
    
    string str;
    cin >> str;

    bool IsTrue = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            s.push(str[i]);
        }
        else {
            if (s.empty() == true) {
                IsTrue = false;
                break;
            }
            else {
                s.pop();
            }
        }
    }

    if (s.empty() == false) {
        IsTrue = false;
    }

    if (IsTrue) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}