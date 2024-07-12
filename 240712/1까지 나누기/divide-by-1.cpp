#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int divide = 1;
    while (n > 1) {
        n /= divide;
        cnt++;
        divide++;
    }
    cout << cnt;
    return 0;
}