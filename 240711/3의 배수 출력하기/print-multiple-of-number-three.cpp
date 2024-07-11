#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int n;
    cin >> n;

    while (a <= n) {
        if (a % 3 == 0) {
            cout << a << " ";
        }
        a++;
    }
    return 0;
}