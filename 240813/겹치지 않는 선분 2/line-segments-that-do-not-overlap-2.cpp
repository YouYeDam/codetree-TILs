#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100][3] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }
            int a1 = arr[i][0], a2 = arr[i][1], b1 = arr[j][0], b2 = arr[j][1];
            if (b1 >= a1 && b2 <= a2) {
                arr[i][2] = 1;
                arr[j][2] = 1;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i][2] == 0) {
            cnt++;
        } 
    }
    cout << cnt;

    return 0;
}