#include <iostream>
using namespace std;

bool CheckLeapYear(int y) {
    bool IsLeapYear = false;
    if (y % 4 == 0) {
        if (y % 100 == 0 && y % 400 != 0) {
            IsLeapYear = false;
        }
        else {
            IsLeapYear = true;
        }
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