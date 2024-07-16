#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10] = {};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[x-1]++;
    }

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}