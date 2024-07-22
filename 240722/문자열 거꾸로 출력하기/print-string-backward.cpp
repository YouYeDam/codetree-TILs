#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string str;
        cin >> str;

        if (str == "END") {
            break;
        }
        
        for (int i = str.length() - 1; i >= 0; i--) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}