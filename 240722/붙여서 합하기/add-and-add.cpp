#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string ab = a + b;
    string ba = b + a;

    cout << stoi(ab) + stoi(ba);
    return 0;
}