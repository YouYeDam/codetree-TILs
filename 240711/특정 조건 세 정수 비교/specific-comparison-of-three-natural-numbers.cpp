#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    
    if (a <= b && a <= c) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    cout << " ";
    if (a == b && a == c) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}