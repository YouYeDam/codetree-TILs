#include <iostream>
using namespace std;

int main() {
    char arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << arr[1] << " " << arr[4] << " " << arr[7];
    return 0;
}