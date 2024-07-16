#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    int min_val = 1001;  
    int min_i = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_i = i;
        }
    }
    int max_val = 0;
    for (int i = min_i + 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    if (max_val == 0) {
        cout << 0;
    }
    else {
        cout << max_val - min_val;
    }
    
    return 0;
}