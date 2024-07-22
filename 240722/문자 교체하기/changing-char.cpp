#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    b[0] = a[0];
    b[1] = a[1];
    cout << b;
    return 0;
}