#include <iostream>
using namespace std;

int main() {
    char alp;
    cin >> alp;

    if (alp == 'z') {
        cout << 'a';
    }
    else {
        int n = alp+1;
        cout << (char)n;
    }
    return 0;
}