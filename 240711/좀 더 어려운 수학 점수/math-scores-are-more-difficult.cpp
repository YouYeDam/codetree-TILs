#include <iostream>
using namespace std;

int main() {
    int am, ae;
    int bm, be;
    cin >> am >> ae >> bm >> be;

    if (am > bm) {
        cout << "A";
    }
    else if (bm > am) {
        cout << "B";
    }
    else {
        if (ae > be) {
            cout << "A";
        }
        else {
            cout << "B";
        }
    }
    return 0;
}