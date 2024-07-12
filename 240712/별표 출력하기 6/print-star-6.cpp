#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int space = 0;

    for (int i = 2*n-1; i >= 1; i -= 2) {
        for (int j = 0; j < space; j++) {
            cout << "  ";
        }
        space++;
        for (int k = i; k >= 1; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    space -= 2;
    for (int i = 3; i <= 2*n-1; i+=2) {
        for (int j = space; j >= 1; j--) {
            cout << "  ";
        }
        space--;
        for (int k = i; k >= 1; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}