#include <iostream>
using namespace std;

int main() {
    int arr[7] = {};
    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        arr[n]++;
    }

    for (int i = 1; i <= 6; i++) {
        cout << i << " - " << arr[i] << endl;
    }
    return 0;
}