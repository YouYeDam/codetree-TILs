#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int odd = 1, even = n;
    for (int i = 1; i <= 2*n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= odd; j++) {
                cout << "* ";
            }
            odd++;
        }
        else {
            for (int j = even; j >= 1; j--) {
                cout << "* ";
            }
            even--;
        }
        cout << endl;
    }
    return 0;
}