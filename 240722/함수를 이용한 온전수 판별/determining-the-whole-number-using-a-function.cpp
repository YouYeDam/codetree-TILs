#include <iostream>
using namespace std;

int CountCompleteNumber(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        bool IsComplete = true;
        if (i % 2 == 0 || i % 10 == 5 || (i % 3 == 0 && i % 9 != 0)) {
            IsComplete = false;
        }
        if (IsComplete) {
            cnt++;
        }
    }
    return cnt;
}
int main() {
    int a, b;
    cin >> a >> b;

    int cnt = CountCompleteNumber(a, b);
    cout << cnt;
    return 0;
}