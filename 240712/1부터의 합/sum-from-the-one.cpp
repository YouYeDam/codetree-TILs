#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}