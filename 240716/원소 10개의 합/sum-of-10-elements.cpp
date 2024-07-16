#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    return 0;
}