#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    float arr[5];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = sum / n;
    cout << fixed;
    cout.precision(1);

    cout << avg << endl;

    if (avg >= 4.0) {
        cout << "Perfect";
    }
    else if (avg >= 3.0) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }
    return 0;
}