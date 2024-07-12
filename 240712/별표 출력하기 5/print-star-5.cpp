#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = n - i; j >= 1; j--) {
            for (int k = n - i; k >= 1; k--) {
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}