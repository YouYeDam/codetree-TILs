#include <iostream>
using namespace std;

int main() {
    int aa, ba;
    char ag, bg;

    cin >> aa >> ag >> ba >> bg;


    if ((aa >= 19 && ag == 'M') || (ba >= 19 && bg == 'M')) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}