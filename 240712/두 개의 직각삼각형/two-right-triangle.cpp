#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            cout << "*";
        }
        for (int k = 0; k < x; k++) {
            cout << "  ";
        }
        x++;
        for (int t = n; t >= i; t--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}