#include <iostream>
using namespace std;

int arr[10];
int x;

void GetNumber(int n) {
    if (n == 1) {
        x = arr[0];
        return;
    }
    GetNumber(n - 1);

    int i = 1;
    while (true) {
        if (x * i % arr[n - 1] == 0) {
            x *= i;
            break;
        }
        i++;
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    GetNumber(n);
    cout << x;
    return 0;
}

    
    //(x * i) % y == 0
    //(x * i) = "최소공배수"
    //(x * i) * j % z == 0
    //(x * i) * j = "최소공배수"