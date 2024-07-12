#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x = 11 + i*2;
        for (int j = 0; j < n; j++) {
            cout << x << " ";
            x += 2;
        }
        cout << endl;
    }
    return 0;
}