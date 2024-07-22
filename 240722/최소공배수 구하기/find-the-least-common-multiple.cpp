#include <iostream>
using namespace std;

void MinMultiple(int n, int m) {
    int min = n;

    while (true) {
        if (min % n == 0 && min % m == 0) {
            cout << min;
            break;
        }
        min++;
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    MinMultiple(n, m);
    return 0;
}