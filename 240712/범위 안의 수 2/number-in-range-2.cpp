#include <iostream>
using namespace std;

int main() {
    int sum = 0, cnt = 0;
    for (int i = 0; i < 10; i++) {
        int x; 
        cin >> x;

        if (x >= 0 && x <= 200) {
            sum += x;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);

    float avg = float(sum) / cnt;
    cout << sum << " " << avg;
    return 0;
}