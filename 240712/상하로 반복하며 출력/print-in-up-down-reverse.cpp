#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j % 2 == 1) {
                cout << i;
            }
            else {
                cout << n-i+1;
            }
        }
        cout << endl;
    }
    return 0;
}