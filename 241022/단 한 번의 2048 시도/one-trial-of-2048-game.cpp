#include <iostream>
using namespace std;

int arr[4][4];

void Push_Left() {
    for (int i = 0; i < 4; i++) {
        int tmp_arr[4];
        int tmp_idx = 0;

        for (int j = 0; j < 4; j++) {
            if (arr[i][j] != 0) {
                tmp_arr[tmp_idx] = arr[i][j];
                tmp_idx++;
            }
        }

        int k = 0;
        for (int j = 0; j < 4; j++) {
            if (j < tmp_idx) {
                arr[i][j] = tmp_arr[k];
                k++;
            }
            else {
                arr[i][j] = 0;
            }
        }
    }
}

void Push_Right() {
    for (int i = 0; i < 4; i++) {
        int tmp_arr[4];
        int tmp_idx = 0;

        for (int j = 0; j < 4; j++) {
            if (arr[i][j] != 0) {
                tmp_arr[tmp_idx] = arr[i][j];
                tmp_idx++;
            }
        }

        int k = 0;
        for (int j = 0; j < 4; j++) {
            if (j >= 4 - tmp_idx) {
                arr[i][j] = tmp_arr[k];
                k++;
            }
            else {
                arr[i][j] = 0;
            }
        }
    }
}

void Push_Up() {
    for (int i = 0; i < 4; i++) {
        int tmp_arr[4];
        int tmp_idx = 0;

        for (int j = 0; j < 4; j++) {
            if (arr[j][i] != 0) {
                tmp_arr[tmp_idx] = arr[j][i];
                tmp_idx++;
            }
        }

        int k = 0;
        for (int j = 0; j < 4; j++) {
            if (j < tmp_idx) {
                arr[j][i] = tmp_arr[k];
                k++;
            }
            else {
                arr[j][i] = 0;
            }
        }
    }
}

void Push_Down() {
    for (int i = 0; i < 4; i++) {
        int tmp_arr[4];
        int tmp_idx = 0;

        for (int j = 0; j < 4; j++) {
            if (arr[j][i] != 0) {
                tmp_arr[tmp_idx] = arr[j][i];
                tmp_idx++;
            }
        }

        int k = 0;
        for (int j = 0; j < 4; j++) {
            if (j >= 4 - tmp_idx) {
                arr[j][i] = tmp_arr[k];
                k++;
            }
            else {
                arr[j][i] = 0;
            }
        }
    }
}

void Sum_Left() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == arr[i][j+1]) {
                arr[i][j] *= 2;
                arr[i][j+1] = 0;
            }
        }
    }
    Push_Left();
}

void Sum_Right() {
    for (int i = 0; i < 4; i++) {
        for (int j = 3; j >= 1 ; j--) {
            if (arr[i][j] == arr[i][j-1]) {
                arr[i][j] *= 2;
                arr[i][j-1] = 0;
            }
        }
    }
    Push_Right();
}

void Sum_Up() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[j][i] == arr[j+1][i]) {
                arr[j][i] *= 2;
                arr[j+1][i] = 0;
            }
        }
    }
    Push_Up();
}

void Sum_Down() {
    for (int i = 0; i < 4; i++) {
        for (int j = 3; j >= 1; j--) {
            if (arr[j][i] == arr[j-1][i]) {
                arr[j][i] *= 2;
                arr[j-1][i] = 0;
            }
        }
    }
    Push_Down();
}

int main() {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    char dir;
    cin >> dir;

    if (dir == 'L') {
        Push_Left();
        Sum_Left();
    }
    else if (dir == 'R') {
        Push_Right();
        Sum_Right();
    }
    else if (dir == 'U') {
        Push_Up();
        Sum_Up();
    }
    else {
        Push_Down();
        Sum_Down();
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}