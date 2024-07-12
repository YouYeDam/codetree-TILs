#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt_class = 0, cnt_hall = 0, cnt_toilet = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 12 == 0) {
            cnt_toilet++;
        }
        else if (i % 3 == 0) {
            cnt_hall++;
        }
        else if (i % 2 == 0) {
            cnt_class++;
        }
    }
    cout << cnt_class << " " << cnt_hall << " " << cnt_toilet;
    return 0;
}