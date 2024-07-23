#include <iostream>
#include <string>
using namespace std;

void CheckPalindrome(string &a) {
    string new_a = "";
    for (int i = a.length() - 1; i >= 0; i--) {
        new_a += a[i];
    }

    if (a == new_a) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
int main() {
    string a;
    cin >> a;

    CheckPalindrome(a);
    return 0;
}