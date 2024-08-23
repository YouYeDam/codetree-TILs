#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    int arr[10][2];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 1; i <= 10000; i++) {
        int x = i;
        int new_x = x;
        bool IsOK = true;

        for (int j = 0; j < n; j++) {
            int a = arr[j][0];
            int b = arr[j][1];
            new_x *= 2;
            
            if (new_x < a || new_x > b) {
                IsOK = false;
                break;
            }
        }

        if (IsOK) {
            cout << x;
            break;
        }
    } 
    return 0;
}