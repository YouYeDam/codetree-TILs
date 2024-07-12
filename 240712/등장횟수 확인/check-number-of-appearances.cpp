#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}