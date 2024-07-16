#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    cout << fixed;
    cout.precision(1);

    int total_sum = 0;
    for (int i = 0; i < 2; i++) {
        int col_sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            total_sum += arr[i][j];
            col_sum += arr[i][j];
        }
        float col_avg = (float)col_sum / 4;
        cout << col_avg << " ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++) {
        int row_sum = 0;
        for (int j = 0; j < 2; j++) {
            row_sum += arr[j][i];
        }
        float row_avg = (float)row_sum / 2;
        cout << row_avg << " ";
    }
    cout << endl;
    float total_avg = (float)total_sum / 8;
    cout << total_avg;
    return 0;
}