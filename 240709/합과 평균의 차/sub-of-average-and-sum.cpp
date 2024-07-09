#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int avg = sum / 3;
    int res = sum - avg;

    cout << sum << endl << avg << endl << res;
    return 0;
}