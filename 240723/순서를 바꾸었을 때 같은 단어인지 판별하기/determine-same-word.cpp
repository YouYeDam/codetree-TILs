#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}