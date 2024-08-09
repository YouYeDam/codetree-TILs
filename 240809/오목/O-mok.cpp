#include <iostream>
using namespace std;

int main() {
    int arr[19][19];

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            cin >> arr[i][j];
        }
    }

    bool IsBlackWin = false;
    bool IsWhiteWin = false;
    int x, y;

    for (int i = 0; i < 19; i++) { // 가로
        for (int j = 2; j < 17; j++) {
            if (arr[i][j] == 1) { //검정
                if (arr[i][j-2] == 1 && arr[i][j-1] == 1 && arr[i][j+1] == 1 && arr[i][j+2] == 1) {
                    IsBlackWin = true;
                    x = i + 1;
                    y = j + 1;
                    break;
                }
            }
            else if (arr[i][j] == 2) { // 흰
                if (arr[i][j-2] == 2 && arr[i][j-1] == 2 && arr[i][j+1] == 2 && arr[i][j+2] == 2) {
                    IsWhiteWin = true;
                    x = i + 1;
                    y = j + 1;
                    break;
                }
            }
        }
    }

    for (int i = 2; i < 17; i++) { // 세로
        for (int j = 0; j < 19; j++) {
            if (arr[i][j] == 1) { // 검정
                if (arr[i-2][j] == 1 && arr[i-1][j] == 1 && arr[i+1][j] == 1 && arr[i+2][j] == 1) {
                    IsBlackWin = true;
                    x = i + 1;
                    y = j + 1;
                    break;
                }
            }
            else if (arr[i][j] == 2) { // 흰
                if (arr[i-2][j] == 2 && arr[i-1][j] == 2 && arr[i+1][j] == 2 && arr[i+2][j] == 2) {
                    IsWhiteWin = true;
                    x = i + 1;
                    y = j + 1;
                    break;
                }    
            }
        }
    }

    for (int i = 2; i < 17; i++) { // 좌대각
        for (int j = 2; j < 17; j++) {
            if (arr[i][j] == 1) { // 검정
                if (arr[i-2][j-2] == 1 && arr[i-1][j-1] == 1 && arr[i+1][j+1] == 1 && arr[i+2][j+2] == 1) {
                    IsBlackWin = true;
                    x = i + 1;
                    y = j + 1;
                }
            }
            else if (arr[i][j] == 2) { // 흰
                if (arr[i-2][j-2] == 2 && arr[i-1][j-1] == 2 && arr[i+1][j+1] == 2 && arr[i+2][j+2] == 2) {
                    IsWhiteWin = true;
                    x = i + 1;
                    y = j + 1;
                }
            }
        }
    }

    for (int i = 2; i < 17; i++) { // 우대각
        for (int j = 2; j < 17; j++) {
            if (arr[i][j] == 1) { // 검정
                if (arr[i-2][j+2] == 1 && arr[i-1][j+1] == 1 && arr[i+1][j-1] == 1 && arr[i+2][j-2] == 1) {
                    IsBlackWin = true;
                    x = i + 1;
                    y = j + 1;
                }
            }
            else if (arr[i][j] == 2) { // 흰
                if (arr[i-2][j+2] == 2 && arr[i-1][j+1] == 2 && arr[i+1][j-1] == 2 && arr[i+2][j-2] == 2) {
                    IsWhiteWin = true;
                    x = i + 1;
                    y = j + 1;
                }
            }
        }
    }

    if (IsBlackWin) {
        cout << 1 << endl << x << " " << y;
    }
    else if (IsWhiteWin) {
        cout << 2 << endl << x << " " << y;
    }
    else {
        cout << 0;
    }
    return 0;
}