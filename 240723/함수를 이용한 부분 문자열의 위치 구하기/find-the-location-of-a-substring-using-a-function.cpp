#include <iostream>
#include <string>
using namespace std;

string str1, str2;

void CheckExist() {
    bool IsExist = false;

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == str2[0]) {
            bool IsSeq = true;
            for (int j = 0; j < str2.length(); j++) {
                if (str1[i+j] != str2[j]) {
                    IsSeq = false;
                    break;
                }
            }
            if (IsSeq) {
                IsExist = true;
                cout << i;
                break;
            }
        }
    }

    if (!IsExist) {
        cout << -1;
    }
}

int main() {
    cin >> str1 >> str2;
    CheckExist();    
    return 0;
}