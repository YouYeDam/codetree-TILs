#include <iostream>
using namespace std;

int main() {
    int n, r, c;
    cin >> n >> r >> c;
    r--; c--;
    int arr[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    while (true) {
        int start_num = arr[r][c];
        bool CanMove = false;

        cout << start_num << " ";
    
        if (r-1 >= 0 && arr[r-1][c] > start_num) { // 상
            r--;
            CanMove = true;
        }
        else if (r+1 <= n-1 && arr[r+1][c] > start_num) { // 하
            r++;
            CanMove = true;
        }
        else if (c-1 >= 0 && arr[r][c-1] > start_num) { // 좌
            c--;
            CanMove = true;
        }
        else if (c+1 <= n-1 && arr[r][c+1] > start_num) { // 우
            c++;
            CanMove = true;
        }
        if (!CanMove) {
            break;
        }
    }

    return 0;
}