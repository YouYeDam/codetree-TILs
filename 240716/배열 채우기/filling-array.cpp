#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int stop_num;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            stop_num = i;
            break;
        }
    }

    for (int i = stop_num - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}