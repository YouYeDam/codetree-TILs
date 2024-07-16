#include <iostream>
using namespace std;

int main() {
    int arr[11] = {};

    for (int i = 0; i < 100; i++) {
        int x; 
        cin >> x;
        if (x == 0) {
            break;
        }
        else {
            arr[x / 10]++;
        }
    }

    for (int i = 1; i <= 9; i++) {
        cout << i << " - " << arr[i] << endl;
    }
    return 0;
}