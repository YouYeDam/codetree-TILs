#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int res_cnt = 0;

    for (int i = start; i <= end; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt == 3) {
            res_cnt++;
        }
    }
    cout << res_cnt;
    return 0;
}