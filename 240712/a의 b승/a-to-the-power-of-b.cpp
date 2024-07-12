#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int prod = 1;

    for (int i = 0; i < b; i++) {
        prod *= a;
    }
    cout << prod;
    return 0;
}