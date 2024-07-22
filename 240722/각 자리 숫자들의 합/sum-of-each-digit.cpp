#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str_n = to_string(n);
    int sum = 0;

    for (int i = 0; i < str_n.length(); i++) {
        sum += str_n[i] - '0';
    }
    cout << sum;
    return 0;
}