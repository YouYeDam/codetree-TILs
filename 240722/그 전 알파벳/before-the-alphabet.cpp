#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c == 'a') {
        cout << 'z';
    }
    else {
        int n = c - 1;
        cout << (char)n;
    }
    return 0;
}