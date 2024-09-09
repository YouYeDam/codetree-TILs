#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int rect1[101][101] = {};
    int rect2[101][101] = {};

    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            rect1[i][j] = 1;
        }
    }

    for (int i = a1; i <= a2; i++) {
        for (int j = b1; j<= b2; j++) {
            rect2[i][j] = 1;
        }
    }

    bool IsOverlapping = false;

    for (int i = 0; i <= 101; i++) {
        for (int j = 0; j <= 101; j++) {
            if (rect1[i][j] == 1 && rect2[i][j] == 1) {
                IsOverlapping = true;
                break;
            }
        }
    }

    if (IsOverlapping) {
        cout << "overlapping";
    }
    else {
        cout << "nonoverlapping";
    }
    return 0;
}