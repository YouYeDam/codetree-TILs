#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 0;
    int prehonor = 2;
    int honor = 2;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        char alp;
        int x;
        cin >> alp >> x;

        if (alp == 'A') {
            a += x;
        }
        else {
            b += x;
        }

        if (a > b) {
            honor = 0;
        }
        else if (b > a) {
            honor = 1;
        }
        else {
            honor = 2;
        }
        if (honor != prehonor) {
            cnt++;
            prehonor = honor;
        }
    }
    cout << cnt;

    return 0;
}