#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;

    for (int i = 2*n-1; i >= 1; i-= 2) {
        for (int j = 0; j < x; j++) {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--) {
            cout << "* ";
        }
        x++;
        cout << endl;
    }
    return 0;
}