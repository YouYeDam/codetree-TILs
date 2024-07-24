#include <iostream>
#include <string>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    string day;
    cin >> m1 >> d1 >> m2 >> d2 >> day;

    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int sum1 = 0, sum2 = 0;

    for (int i = 1; i <= m1 - 1; i++) {
        sum1 += num_of_days[i];
    }
    sum1 += d1;

    for (int i = 1; i <= m2 - 1; i++) {
        sum2 += num_of_days[i];
    }
    sum2 += d2;
    int diff = sum2 - sum1;
    int cnt = 0;
    int obj = 0;
    int mod = diff % 7;

    cnt += diff / 7;

    if (day == "Mon") {
        obj = 0;
    }
    else if (day == "Tue") {
        obj = 1;
    }
    else if (day == "Wed") {
        obj = 2;
    }
    else if (day == "Thu") {
        obj = 3;
    }
    else if (day == "Fri") {
        obj = 4;
    }
    else if (day == "Sat") {
        obj = 5;
    }
    else if (day == "Sun") {
        obj = 6;
    }

    if (mod >= obj) {
        cnt++;
    }

    cout << cnt;
    return 0;
}