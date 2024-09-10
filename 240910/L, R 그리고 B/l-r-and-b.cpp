#include <iostream>
using namespace std;

int main() {
    char arr[10][10];

    int lx, ly, rx, ry, bx, by;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'B') {
                bx = i;
                by = j;
            }
            else if (arr[i][j] == 'R') {
                rx = i;
                ry = j;
            }
            else if (arr[i][j] == 'L') {
                lx = i;
                ly = j;
            }
        }
    }

    if (lx != bx && ly != by) {
        int sum = abs(lx - bx) + abs(ly - by) - 1;
        cout << sum;
    }
    else if (lx == bx && lx == rx) {
        if ((ly < ry && ry < by) || (by < ry && ry < ly)) {
            int sum = abs(ly - by) + 1;
            cout << sum;
        }
        else {
            int sum = abs(ly - by) - 1;
            cout << sum;
        }
    }
    else if (ly == by && ly == ry) {
        if ((lx < rx && rx < bx) || (bx < rx && rx < lx)) {
            int sum = abs(lx - bx) + 1;
            cout << sum;
        }
        else {
            int sum = abs(lx - bx) - 1;
            cout << sum;
        }
    }
    return 0;
}