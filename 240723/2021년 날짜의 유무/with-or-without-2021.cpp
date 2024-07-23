#include <iostream>
using namespace std;

bool CheckDate(int m, int d) {
    bool IsExist = true;

    if (m > 12) {
        IsExist = false;
    }
    else {
        if (m == 2 && d > 28) {
            IsExist = false;
        }
        else if (m != 2 && m <= 7) {
            if (m % 2 == 1 && d >= 32) {
                IsExist = false;
            }
            else if (m % 2 == 0 && d >= 31) {
                IsExist = false;
            }
        }
        else if (m != 2 && m <= 12) {
            if (m % 2 == 1 && d >= 31) {
                IsExist = false;
            }
            else if (m % 2 == 0 && d >= 32) {
                IsExist = false;
            }
        }

        return IsExist;
    }
}
int main() {
    int m, d;
    cin >> m >> d;
    bool IsExist = CheckDate(m, d);

    if (IsExist) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}