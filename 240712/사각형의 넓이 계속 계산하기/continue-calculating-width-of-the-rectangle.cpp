#include <iostream>
using namespace std;

int main() {
    while (true) {
        int a, b;
        char c;
        cin >> a >> b >> c;

        cout << a * b << endl;
        if (c == 'C') {
            break;
        }
    }
    return 0;
}