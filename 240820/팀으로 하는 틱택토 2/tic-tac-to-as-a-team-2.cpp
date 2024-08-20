#include <iostream>
using namespace std;

bool CheckTicTacToe(int a, int b, int c) {
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
        return true;
    }
    else {
        return false;
    }

}

int main() {
    int arr[3][3];

    for (int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        int a = x / 100;
        int b = (x % 100) / 10;
        int c = (x % 100) % 10;

        arr[i][0] = a;
        arr[i][1] = b;
        arr[i][2] = c;
    }
    //00 01 02 => 10 11 12 => 20 21 22
    //00 10 20 => 01 11 21 => 02 12 22
    //00 11 22 => 02 11 20
    int cnt = 0;

    for (int i = 0; i < 3; i++) { // 가로
        int tic[3];
        for (int j = 0; j < 3; j++) {
            tic[j] = arr[i][j];
        }
        bool IsValid = CheckTicTacToe(tic[0], tic[1], tic[2]);
        if (IsValid) {
            cnt++;
        }
    }

    for (int i = 0; i < 3; i++) { // 세로
        int tic[3];
        for (int j = 0; j < 3; j++) {
            tic[j] = arr[j][i];
        }
        bool IsValid = CheckTicTacToe(tic[0], tic[1], tic[2]);
        if (IsValid) {
            cnt++;
        }
    }


    if (CheckTicTacToe(arr[0][0], arr[1][1], arr[2][2])) {
        cnt++;
    }
    if (CheckTicTacToe(arr[0][2], arr[1][1], arr[2][0])) {
        cnt++;
    }

    cout << cnt;
    return 0;
}