#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int stop_num;
    bool IsStop = false;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            stop_num = i;
            IsStop = true;
            break;
        }
    }
    if (!IsStop) {
        stop_num = 10;
    }
    for (int i = stop_num - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}