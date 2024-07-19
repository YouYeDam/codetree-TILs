#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string ab = a + b;
    string ba = b + a;

    if (ab == ba) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}