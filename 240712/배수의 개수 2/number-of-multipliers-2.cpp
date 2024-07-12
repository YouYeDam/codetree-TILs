#include <iostream>
using namespace std;

int main() {
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}