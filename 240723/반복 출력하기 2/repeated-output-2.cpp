#include <iostream>
using namespace std;

void PrintString(int n) {
    if (n == 0) {
        return;
    }
    PrintString(n - 1);
    cout << "HelloWorld" << endl;
}
int main() {
    int n;
    cin >> n;
    PrintString(n);
    return 0;
}