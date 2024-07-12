#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 1 && x % 3 == 0) {
            sum += x;
        }
    }
    cout << sum;
    return 0;
}