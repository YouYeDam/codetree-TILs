#include <iostream>
using namespace std;

int main() {
    char as, bs, cs;
    int at, bt, ct;
    
    cin >> as >> at >> bs >> bt >> cs >> ct;
    int sum = 0;

    if (as == 'Y') {
        if (at >= 37) {
            sum += 1;
        }
    }
    if (bs == 'Y') {
        if (bt >= 37) {
            sum += 1;
        }
    }
    if (cs == 'Y') {
        if (ct >= 37) {
            sum += 1;
        }
    }

    if (sum >= 2) {
        cout << 'E';
    }
    else {
        cout << 'N';
    }
    return 0;
}