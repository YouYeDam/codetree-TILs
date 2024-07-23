#include <iostream>
using namespace std;

int n, m;
int arr[100];

void PrintElement() {
    int sum = arr[m - 1];
    
    while (true) {
        if (m % 2 == 1) {
            m -= 1;
        }
        else {
            m /= 2;
        }
        sum += arr[m - 1];
        if (m == 1) {
            break;
        }
    }
    cout << sum;
}
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    PrintElement();
    return 0;
}