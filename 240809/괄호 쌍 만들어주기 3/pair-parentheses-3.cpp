#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int cnt = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ')') {
            continue;
        }
        for (int j = i; j < a.length(); j++) {
            if (a[j] == ')') {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}