#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;

    int prod = 1;
    while (true) {
        prod *= 2;
        x++;
        if (prod == n) {
            break;
        }
    }
    cout << x;
    return 0;
}