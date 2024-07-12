#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int space = n - 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "@ ";
        }
        cout << endl;
        space--;
    }

    for (int i = n-1; i >= 1; i--) {
        for (int k = i; k >= 1; k--) {
            cout << "@ ";
        }
        cout << endl;
    }
    return 0;
}