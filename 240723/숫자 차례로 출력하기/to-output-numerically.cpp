#include <iostream>
using namespace std;

void PrintNumber(int n) {
    if (n == 0) {
        return;
    }
    PrintNumber(n - 1);
    cout << n << " ";    
}

void PrintNumberReverse(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    PrintNumberReverse(n - 1);
}

int main() {
    int n;
    cin >> n;
    PrintNumber(n);
    cout << endl;
    PrintNumberReverse(n);
    return 0;
}