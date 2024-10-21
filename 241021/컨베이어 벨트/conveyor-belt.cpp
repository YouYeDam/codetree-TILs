#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int arr[2][200];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < t; i++) {
        int tmp_up = arr[0][n - 1];
        int tmp_down = arr[1][n - 1];

        for(int j = n - 1; j >= 1; j--) {
            arr[0][j] = arr[0][j - 1];
            arr[1][j] = arr[1][j - 1];
        }

        arr[0][0] = tmp_down;
        arr[1][0] = tmp_up;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}