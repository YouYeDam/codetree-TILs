#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << fixed;
    cout.precision(1);
    int sum = a + b;
    double avg = (double)(a+b) / 2;
    cout << sum << " " << avg;
    return 0;
}