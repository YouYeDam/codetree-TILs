#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n, k;
    string t;
    cin >> n >> k >> t;
    string arr[100];
    int index = 0;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        bool IsSame = true;
        for (int j = 0; j < t.length(); j++) {
            if (str[j] != t[j]) {
                IsSame = false;
            }
        }

        if (IsSame) {
            arr[index] = str;
            index++;
        }
    }

    sort(arr, arr + index);
    cout << arr[k - 1];
    return 0;
}