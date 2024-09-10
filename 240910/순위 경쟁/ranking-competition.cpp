#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string honor = "abc";
    string prev_honor = "abc";
    int a = 0, b = 0, c = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        char alp;
        int score;
        cin >> alp >> score;

        if (alp == 'A') {
            a += score;
        }
        else if (alp == 'B') {
            b += score;
        }
        else if (alp == 'C') {
            c += score;
        }

        if (a == b && a == c) {
            honor = "abc";
        }
        else if (a == b && a > c) {
            honor = "ab";
        }
        else if (a == c && a > b) {
            honor = "ac";
        }
        else if (b == c && b > a) {
            honor = "bc";
        }
        else if (a > b && a > c) {
            honor = "a";
        }
        else if (b > a && b > c) {
            honor = "b";
        }
        else if (c > a && c > b) {
            honor = "c";
        }

        if (prev_honor != honor) {
            cnt++;
            prev_honor = honor;
        }
    }
    cout << cnt;
    return 0;
}