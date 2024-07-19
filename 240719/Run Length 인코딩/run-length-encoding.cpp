#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string res_str = "";
    
    int x = 0;

    for (int i = 0; i < str.length(); i++) {
        if ((i != str.length() - 1 && str[i] != str[i+1]) || (i == str.length() - 1)) {
            res_str += str[i];

            int num = i - x + 1;
            if (num >= 1000) {
                res_str += num / 1000 + 48;
                num %= 1000;
            }
            if (num >= 100) {
                res_str += num / 100 + 48;
                num %= 100;
            }
            if (num >= 10) {
                res_str += num / 10 + 48;
                num %= 10;
            }
            res_str += num + 48;

            x = i + 1;
        }
    }
    cout << res_str.length() << endl << res_str;
    
    return 0;
}