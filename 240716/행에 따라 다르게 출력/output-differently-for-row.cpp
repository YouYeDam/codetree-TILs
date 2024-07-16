#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << cnt << " ";
            if (i % 2 == 1) {
                if (j != n) {
                    cnt++;
                }
                else {
                    cnt += 2;
                }
            }
            else {
                if (j != n) {
                    cnt += 2;
                }
                else {
                    cnt++;
                }
            }
        }    
        cout << endl;
    }
    return 0;
}