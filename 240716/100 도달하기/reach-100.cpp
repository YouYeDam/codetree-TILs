#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    arr[0] = 1;
    arr[1] = n;
    cout << arr[0] << " " << arr[1] << " ";
    int i = 2;

    while (true) {
        arr[i] = arr[i-2] + arr[i-1];
        
        cout << arr[i] << " ";

        if (arr[i] > 100) {
            break;
        }
        i++;
    }
    return 0;
}