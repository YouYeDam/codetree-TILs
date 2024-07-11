#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a / b << ".";

    for (int i = 0; i < 20; i++) {
        int x = (a % b) * 10;
        cout << x / b;
        a = x;
    }

    return 0;
}