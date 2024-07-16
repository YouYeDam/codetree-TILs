#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 3 == 0) {
            cout << arr[i-1];
            break;
        }
    }
    return 0;
}