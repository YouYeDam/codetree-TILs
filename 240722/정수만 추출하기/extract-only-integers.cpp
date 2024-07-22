#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string new_a = "";
    string new_b = "";

    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            new_a += a[i];
        }
        else {
            break;
        }
    }

    for (int i = 0; i < b.length(); i++) {
        if (b[i] >= '0' && b[i] <= '9') {
            new_b += b[i];
        }
        else {
            break;
        }
    }

    cout << stoi(new_a) + stoi(new_b);
    return 0;
}