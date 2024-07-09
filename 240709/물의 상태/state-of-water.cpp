#include <iostream>
using namespace std;

int main() {
    int Temperature;
    cin >> Temperature;
    if (Temperature < 0) {
        cout << "ice";
    }
    else if (Temperature >= 100) {
        cout << "vapor";
    }
    else {
        cout << "water";
    }
    return 0;
}