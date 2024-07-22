#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    int sum = int(a) + int(b);
    int sub;

    if (int(a) >= int(b)) {
        sub = int(a) - int(b);
    }
    else {
        sub = int(b) - int(a);
    }

    cout << sum << " " << sub;
    return 0;
}