#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    while (true) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3;
            n++;
        }
        cnt++;
        if (n == 1) {
            break;
        }
    }
    cout << cnt;
    return 0;
}