#include <iostream>
using namespace std;

bool CheckLeapYear(int y) {
    bool IsLeapYear = false;
    if (y % 4 == 0) {
        if (y % 4 == 100 && y % 400 != 100) {
            IsLeapYear = false;
        }
        IsLeapYear = true;
    }
    return IsLeapYear;
}
int main() {
    int y;
    cin >> y;
    bool res = CheckLeapYear(y);
    if (res == true) {
        cout << "true";
    }
    else {
        cout << "false";
    }
    return 0;
}