#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 1 && x % 3 == 0) {
            cout << x << endl;
        }
    }
    return 0;
}