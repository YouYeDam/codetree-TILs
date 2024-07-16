#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int max_val = -999;
    int min_val = 999;

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 999 || arr[i] == -999) {
            break;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    cout << max_val << " " << min_val;
    return 0;
}