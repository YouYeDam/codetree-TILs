#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int odd = n/2;
    int even = n/2 - 1;

    if (n == 1) {
        cout <<"*";
    }
    else {
        for (int i = 0; i < (n/2)*2; i++) {
            if (i == 0) {
                for (int j = 0; j < n; j++) {
                    cout << "* ";
                }
            }

            else if (i % 2 == 1) {
                for (int j = i / 2; j >= 1; j--) {
                    cout << "    ";
                }
                for (int k = odd; k >= 1; k--) {
                    cout << "*   ";
                }
                odd--;
            }

            else if (i % 2 == 0) {
                for (int j = i / 2; j >= 1; j--) {
                    cout << "    ";
                }
                for (int k = even; k >= 1; k--) {
                    cout << "*   ";
                }
                even--;
            }
            cout << endl;
            cout << "  ";
        }
    }

    return 0;
}