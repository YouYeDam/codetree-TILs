#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    char fir_alp = str[0];
    char sec_alp = str[1];
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == fir_alp) {
            str[i] = sec_alp;
        }
        else if (str[i] == sec_alp) {
            str[i] = fir_alp;
        }
    }
    cout << str;
    return 0;
}