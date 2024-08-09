#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n >> str;
    int cnt = 0;

    for (int i= 0; i < n - 2; i++) {
        if (str[i] == 'C') {
            for (int j = i; j < n - 1; j++) {
                if (str[j] == 'O') {
                    for (int k = j; k < n; k++) {
                        if (str[k] == 'W') {
                            cnt++;
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}