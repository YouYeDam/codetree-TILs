#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int alp = 65;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (char)alp;
            alp++;
            if (alp == 91) {
                alp = 65;
            }
        }
        cout << endl;
    }
    return 0;
}