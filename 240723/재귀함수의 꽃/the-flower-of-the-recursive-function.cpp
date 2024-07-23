#include <iostream>
using namespace std;

void PrintNumber(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    PrintNumber(n - 1);
    cout << n << " ";
}
int main() {
    int n;
    cin >> n;
    PrintNumber(n);
    return 0;
}