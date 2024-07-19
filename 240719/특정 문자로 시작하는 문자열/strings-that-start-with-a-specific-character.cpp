#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[20];
    int len = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    char c;
    cin >> c;

    for (int i = 0; i < n; i++) {
        if (arr[i][0] == c) {
            len += arr[i].length();
            cnt++;
        } 
    }

    cout << fixed;
    cout.precision(2);
    float avg = (float)len / cnt;

    cout << cnt << " " << avg;

    return 0;
}