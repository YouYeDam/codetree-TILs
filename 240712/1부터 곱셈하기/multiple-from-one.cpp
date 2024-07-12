#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prod = 1;

    for (int i = 1; i <= 10; i++) {
        prod *= i;
        if (prod >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}