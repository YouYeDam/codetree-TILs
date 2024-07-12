#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1 + 2*i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
//1 + 2i;