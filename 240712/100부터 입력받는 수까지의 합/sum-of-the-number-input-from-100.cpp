#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    for (int i = n; i <= 100; i++) {
        sum += i;
    }
    cout << sum;
    return 0;
}