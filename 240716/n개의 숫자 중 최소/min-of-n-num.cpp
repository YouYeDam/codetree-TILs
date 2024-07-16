#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int min_val = INT_MAX;
    int min_cnt = 0;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] <= min_val) {
            min_val = arr[i];
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == min_val) {
            min_cnt++;
        }
    }
    cout << min_val << " " << min_cnt;
    return 0;
}