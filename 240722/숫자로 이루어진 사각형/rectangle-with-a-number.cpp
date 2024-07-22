#include <iostream>
using namespace std;

void MakeSquare(int n) {
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << cnt << " ";
            cnt++;
            if (cnt == 10) {
                cnt = 1;
            }
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    MakeSquare(n);
    return 0;
}