#include <iostream>
using namespace std;

int FindDivisior(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        bool IsDivisior = false;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                IsDivisior = true;
                break;
            }
        }
        if (i != 1 && IsDivisior == false) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    int sum = FindDivisior(a, b);
    cout << sum;
    return 0;
}