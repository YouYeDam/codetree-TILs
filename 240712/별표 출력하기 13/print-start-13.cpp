#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int odd = n, even = 1;

    for (int i = 1; i <= 2*n; i++) {
        if (i % 2 == 1) {
            for (int j = odd; j >= 1; j--) {
                cout << "* ";
            }
            odd--;
        }
        else {
            for (int j = 1; j <= even; j++) {
                cout << "* ";
            }
            even++;
        }
        cout << endl;
    }
    return 0;
}