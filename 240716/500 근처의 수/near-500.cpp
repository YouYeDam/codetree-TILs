#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int min_val = 1001;
    int max_val = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] < 500) {
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
        }
        else if (arr[i] > 500) {
            if (arr[i] < min_val) {
                min_val = arr[i];
            }
        }
    }
    cout << max_val << " " << min_val;
    return 0;
}