#include <iostream>
using namespace std;

void aSquareb(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    cout << res;
}
int main() {
    int a, b;
    cin >> a >> b;
    aSquareb(a, b);
    return 0;
}