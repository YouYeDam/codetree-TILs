#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j < i) {
                cout << "  ";
            }
            else {
                cout << cnt << " ";
                cnt++;
                if (cnt == 10) {
                    cnt = 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}