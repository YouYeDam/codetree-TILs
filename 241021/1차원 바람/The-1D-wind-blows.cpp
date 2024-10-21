#include <iostream>
using namespace std;

int n, m, q;
int arr[100][100];

void Right_Up_Change(int r);
void Right_Down_Change(int r);
void Left_Up_Change(int r);
void Left_Down_Change(int r);

bool Check_Up_Condition(int r) {
    for (int k = 0; k < m; k++) {
        if (r > 0 && arr[r][k] == arr[r - 1][k]) {
            return true;
        }
    }
    return false;
}

bool Check_Down_Condition(int r) {
    for (int k = 0; k < m; k++) {
        if (r < n - 1 && arr[r][k] == arr[r + 1][k]) {
            return true;
        }
    }
    return false;
}

void Right_Up_Change(int r) {
    int tmp_up = arr[r - 1][0];
    for (int k = 0; k < m - 1; k++) {
        arr[r - 1][k] = arr[r - 1][k + 1];
    }
    arr[r - 1][m - 1] = tmp_up;
    int new_r = r - 1;

    if (Check_Up_Condition(new_r)) {
        Left_Up_Change(new_r);
    }
}

void Right_Down_Change(int r) {
    int tmp_down = arr[r + 1][0];
    for (int k = 0; k < m - 1; k++) {
        arr[r + 1][k] = arr[r + 1][k + 1];
    }
    arr[r + 1][m - 1] = tmp_down;
    int new_r = r + 1;
    
    if (Check_Down_Condition(new_r)) {
        Left_Down_Change(new_r);
    }
}

void Left_Up_Change(int r) {
    int tmp_up = arr[r - 1][m - 1];
    for (int k = m - 1; k >= 1; k--) {
        arr[r - 1][k] = arr[r - 1][k - 1];
    }
    arr[r - 1][0] = tmp_up;
    int new_r = r - 1;

    if (Check_Up_Condition(new_r)) {
        Right_Up_Change(new_r);
    }
}

void Left_Down_Change(int r) {
    int tmp_down = arr[r + 1][m - 1];
    for (int k = m - 1; k >= 1; k--) {
        arr[r + 1][k] = arr[r + 1][k - 1];
    }
    arr[r + 1][0] = tmp_down;
    int new_r = r + 1;
    
    if (Check_Down_Condition(new_r)) {
        Right_Down_Change(new_r);
    }
}


int main() {
    cin >> n >> m >> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < q; i++) {
        int r;
        char d;
        cin >> r >> d;
        r -= 1;

        if (d == 'L') {
            int tmp = arr[r][m - 1];
            for (int j = m - 1; j >= 1; j--) {
                arr[r][j] = arr[r][j - 1];
            }
            arr[r][0] = tmp;

            if (Check_Up_Condition(r)) {
                Right_Up_Change(r);
            }
            
            if (Check_Down_Condition(r)) {
                Right_Down_Change(r);
            }
        }
        else {
            int tmp = arr[r][0];
            for (int j = 0; j < m - 1; j++) {
                arr[r][j] = arr[r][j + 1];
            }
            arr[r][m - 1] = tmp;

            if (Check_Up_Condition(r)) {
                Left_Up_Change(r);
            }
            
            if (Check_Down_Condition(r)) {
                Left_Down_Change(r);
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}