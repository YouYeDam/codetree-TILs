#include <iostream>
using namespace std;

void Plus(int a, int c) {
    cout << a << " + " << c << " = " << a + c;
}

void Minus(int a, int c) {
    cout << a << " - " << c << " = " << a - c;
}

void Divide(int a, int c) {
    cout << a << " / " << c << " = " << a / c;
}

void Multiple(int a, int c) {
    cout << a << " * " << c << " = " << a * c;
}

int main() {
    int a, c;
    char o;
    cin >> a >> o >> c;

    if (o == '+') {
        Plus(a, c);
    }
    else if (o == '-') {
        Minus(a, c);
    }
    else if (o == '/') {
        Divide(a, c);
    }
    else if (o == '*') {
        Multiple(a, c);
    }
    else {
        cout << "False";
    }
    return 0;
}