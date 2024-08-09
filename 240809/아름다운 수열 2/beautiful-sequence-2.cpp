#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr1[100], arr2[100];
    int n_arr2[101] = {};
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
        n_arr2[arr2[i]]++;
    }

    int cnt = 0;

    for (int i = 0; i <= n - m; i++) {
        int n_arr1[101] = {};
        for (int j = i; j < i + m; j++) {
            n_arr1[arr1[j]]++;
        }
        bool IsSame = true;
        for (int i = 1; i <= 100; i++) {
            if (n_arr1[i] != n_arr2[i]) {
                IsSame = false;
                break;
            }
        }
        if (IsSame) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}