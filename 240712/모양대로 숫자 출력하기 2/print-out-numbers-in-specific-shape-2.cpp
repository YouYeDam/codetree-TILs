#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << cnt << " ";
            cnt += 2;
            if (cnt == 10) {
                cnt = 2;
            }
        }
        cout << endl;
    }
    return 0;
}