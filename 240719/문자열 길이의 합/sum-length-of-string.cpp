#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[10];
    int len = 0, cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        len += arr[i].length();
        if (arr[i][0] == 'a') {
            cnt++;
        }
    }
    cout << len << " " << cnt;
    return 0;
}