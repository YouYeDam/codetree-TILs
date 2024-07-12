#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int cnt = 0;
    while (true) {
        int age;
        cin >> age;

        if (age >= 20 && age <= 29) {
            sum += age;
            cnt++;
        }
        else {
            break;
        }
    }

    cout << fixed;
    cout.precision(2);

    float avg = float(sum) / cnt;
    cout << avg;
    return 0;
}