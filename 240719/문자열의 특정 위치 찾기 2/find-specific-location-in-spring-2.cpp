#include <iostream>
using namespace std;

int main() {
    string str1 = "apple", str2 = "banana", str3 = "grape", str4 = "blueberry", str5 = "orange";
    char c;
    cin >> c;
    int cnt = 0;

    for (int i = 0; i < str1.length(); i++) {
        if (str1[2] == c || str1[3] == c) {
            cout << str1 << endl;
            cnt++;
            break;
        }
    }
    for (int i = 0; i < str2.length(); i++) {
        if (str2[2] == c || str2[3] == c) {
            cout << str2 << endl;
            cnt++;
            break;
        }
    }
    for (int i = 0; i < str3.length(); i++) {
        if (str3[2] == c || str3[3] == c) {
            cout << str3 << endl;
            cnt++;
            break;
        }
    }
    for (int i = 0; i < str4.length(); i++) {
        if (str4[2] == c || str4[3] == c) {
            cout << str4 << endl;
            cnt++;
            break;
        }
    }
    for (int i = 0; i < str5.length(); i++) {
        if (str5[2] == c || str5[3] == c) {
            cout << str5 << endl;
            cnt++;
            break;
        }
    }
    cout << cnt;
    return 0;
}