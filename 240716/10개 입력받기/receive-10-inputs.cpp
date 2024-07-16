#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int cnt = 10;
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            cnt = i;
            break;
        }
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);

    float avg = (float)sum / cnt;
    cout << sum << " " << avg;
    return 0;
}