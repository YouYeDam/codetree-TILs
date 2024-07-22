#include <iostream>
using namespace std;

int FindMinVal(int a, int b, int c) {
    int min_val;

    if (a <= b) {
        if (a <= c) {
            min_val = a;
        }
        else {
            min_val = c;
        }
    }
    else {
        if (b <= c) {
            min_val = b;
        }
        else {
            min_val = c;
        }
    }
    return min_val;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int min_val = FindMinVal(a, b, c);
    cout << min_val;
    return 0;
}