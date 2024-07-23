#include <iostream>
using namespace std;

int GetFibonacci(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 1;
    }
    return GetFibonacci(n - 2) + GetFibonacci(n - 1);
}
int main() {
    int n;
    cin >> n;
    cout << GetFibonacci(n);
    return 0;
}