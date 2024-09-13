#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int h = 0;

    for (int i = 1; i <= 100; i++) {
        int cnt = 0;
        int up = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] >= i) {
                cnt++;
            }
            else if (arr[j] == i - 1 && up < l) {
                cnt++;
                up++;
            }
        }
        if (cnt >= i) {
            h = i;
        }
    }
    cout << h;
    return 0;
}