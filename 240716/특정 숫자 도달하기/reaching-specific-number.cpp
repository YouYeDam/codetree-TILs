#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] >= 250) {
            break;
        }
        cnt++;
        sum += arr[i];
    }
    cout << fixed;
    cout.precision(1);
    float avg = (float)sum / cnt;

    cout << sum << " " << avg;
    return 0;
}