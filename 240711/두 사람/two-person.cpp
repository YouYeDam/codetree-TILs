#include <iostream>
using namespace std;

int main() {
    int aa, ba;
    char ag, bg;

    cin >> aa >> ag >> ba >> bg;

    if (aa >= 19 || ba >= 19) {
        if (ag == 'M' || bg == 'M') {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    else {
        cout << 0;
    }
    return 0;
}