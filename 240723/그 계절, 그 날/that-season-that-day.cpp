#include <iostream>
using namespace std;

bool CheckLeapYear(int y) {
    bool IsLeapYear = false;

    if (y % 4 == 0) {
        if (y % 100 == 0 && y % 400 == 0) {
            IsLeapYear = true;
        }
        else if (y % 100 == 0) {
            IsLeapYear = false;
        }
        else {
            IsLeapYear = true;
        }
    }
    else {
        IsLeapYear = false;
    }
    return IsLeapYear;
}

bool CheckDate(int y, int m, int d) {

    bool IsLeapYear = CheckLeapYear(y);
    bool IsExist = true;

    if (m == 2) {
        if (IsLeapYear) {
            if (d > 29) {
                IsExist = false;
            }
        }
        else {
            if (d > 28) {
                IsExist = false;
            }
        }
    }
    else if (m != 2 && m <= 7) {
        if (m % 2 == 1 && d > 31) {
            IsExist = false;
        }
        else if (m % 2 == 0 && d > 30) {
            IsExist = false;
        }
    }
    else if (m != 2 && m > 7) {
        if (m % 2 == 1 && d > 30) {
            IsExist = false;
        }
        else if(m % 2 == 0 && d > 31) {
            IsExist = false;
        }
    }

    return IsExist;
}

void CheckCondition(int y, int m, int d) {
    bool IsExist = CheckDate(y, m, d);
    if (IsExist) {
        if (m >= 3 && m <= 5) {
            cout << "Spring";
        }
        else if (m >= 6 && m <= 8) {
            cout << "Summer";
        }
        else if (m >= 9 && m <= 11) {
            cout << "Fall";
        }
        else {
            cout << "Winter";
        }
    }
    else {
        cout << -1;
    }
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;

    CheckCondition(y, m, d);
    return 0;
}