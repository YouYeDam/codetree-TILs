#include <iostream>
using namespace std;

void CheckNumber(int n) {
    if (n % 2 == 0) {
        if (((n / 10) + (n % 10)) % 5 == 0) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
    }
    else {
        cout << "No";
    }
}
int main() {
    int n;
    cin >> n;
    CheckNumber(n);
    return 0;
}