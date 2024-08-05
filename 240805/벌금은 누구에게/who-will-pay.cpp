#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int arr[101] = {};
    bool IsExist =false;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        arr[x]++;
        if (arr[x] >= k) {
            cout << x;
            IsExist = true;
            break;
        }
    }

    if (!IsExist) {
        cout << -1;
    }

    return 0;
}