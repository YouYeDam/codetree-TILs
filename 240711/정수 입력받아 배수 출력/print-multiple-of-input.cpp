#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int multi = n;

    for (int i = 0; i < 5; i++) {
        cout << multi << " ";
        multi += n;
    }
    return 0;
}