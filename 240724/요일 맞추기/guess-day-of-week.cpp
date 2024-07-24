#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int sum1 = num_of_days[m1 - 1] + d1;
    int sum2 = num_of_days[m2 - 1] + d2;

    int diff;

    if (sum1 <= sum2) {
        diff = (sum2 - sum1) % 7;
        if (diff == 0) {
            cout << "Mon";
        }
        else if (diff == 1) {
            cout << "Tue";
        }
        else if (diff == 2) {
            cout << "Wed";
        }
        else if (diff == 3) {
            cout << "Thu";
        }
        else if (diff == 4) {
            cout << "Fri";
        }
        else if (diff == 5) {
            cout << "Sat";
        }
        else if (diff == 6) {
            cout << "Sun";
        }
    }
    else {
        diff = (sum1 - sum2) % 7;
        if (diff == 0) {
            cout << "Mon";
        }
        else if (diff == 1) {
            cout << "Sun";
        }
        else if (diff == 2) {
            cout << "Sat";
        }
        else if (diff == 3) {
            cout << "Fri";
        }
        else if (diff == 4) {
            cout << "Thu";
        }
        else if (diff == 5) {
            cout << "Wed";
        }
        else if (diff == 6) {
            cout << "Tue";
        }
    }




    return 0;
}