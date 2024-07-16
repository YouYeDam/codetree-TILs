#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int PassCnt = 0;

    for (int i = 0; i < n; i++) {
        int arr[4];
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
            sum += arr[j];
        }

        float avg = (float)sum / 4;
        if (avg >= 60) {
            cout << "pass" << endl;
            PassCnt++;
        }
        else {
            cout << "fail" << endl;
        }
    }
    cout << PassCnt;
    return 0;
}