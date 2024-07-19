#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int ee_cnt = 0;
    int eb_cnt = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, 2) == "ee") {
            ee_cnt++;
        }
        if (str.substr(i, 2) == "eb") {
            eb_cnt++;
        }
    }
    cout << ee_cnt << " " << eb_cnt;
    return 0;
}