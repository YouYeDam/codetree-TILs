#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int q;
    cin >> str>> q;
    int len = str.length();
    for (int i = 0; i < q; i++) {
        int num;
        cin >> num;

        if (num == 1) {
            str = str.substr(1, len - 1) + str.substr(0, 1);
        }
        else if (num == 2) {
            str = str.substr(len - 1, 1) + str.substr(0, len - 1);
        }
        else {
            string temp = "";
            for (int j = len - 1; j >= 0; j--) {
                temp += str[j];
            }
            str = temp;
        }
        cout << str << endl;
    }
    return 0;
}