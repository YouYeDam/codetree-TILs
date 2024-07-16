#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
    return 0;
}