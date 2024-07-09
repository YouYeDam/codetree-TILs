#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    string b;

    b = a == 100 ? "pass" : "failure";

    cout << b;
    return 0;
}