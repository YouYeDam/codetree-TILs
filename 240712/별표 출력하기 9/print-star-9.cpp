#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = n - 1;

    for (int i = 1; i <= 2*n-1; i += 2) {
        for (int j = x; j >= 1; j--) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
        x--;
    }
    return 0;
}