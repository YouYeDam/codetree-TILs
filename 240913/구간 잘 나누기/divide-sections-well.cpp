#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    for (int i = 1; i < sum; i++) {
        int cnt = 0;
        int cur_sum = 0;
        bool IsPossible = true;
        for (int j = 0; j < n; j++) {
            if (arr[j] > i) {
                break;
                IsPossible = false;
            }
            if (cur_sum + arr[j] > i) {
                cnt++;
                cur_sum = arr[j];
            }
            else {
                cur_sum += arr[j];
            }
        }
        if (!IsPossible) {
            continue;
        }

        if (cnt == m - 1) {
            cout << i;
            break;
        }
    }

    return 0;
}