#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int odd_sum = 0;
    int even_sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 0) {
            odd_sum += arr[i];
        }
        else {
            even_sum += arr[i];
        }
    }
    if (odd_sum >= even_sum) {
        cout << odd_sum - even_sum;
    }
    else {
        cout << even_sum - odd_sum;
    }
    return 0;
}