#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 1) {
                cout << cnt << " ";
                cnt++;
            }
            else {
                cout << cnt << " ";
                cnt--;
            }
        }
        if (i % 2 == 1) {
            cnt += n-1;
        }
        else {
            cnt += n+1; 
        }
        cout << endl;
    }
    return 0;
}