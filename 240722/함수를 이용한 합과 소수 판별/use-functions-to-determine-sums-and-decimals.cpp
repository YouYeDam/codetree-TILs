#include <iostream>
#include <string>
using namespace std;

int CountNumber(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        bool IsDivisior = true;
        bool IsEven = true;

        for (int j = 2; j < i; j++) {
            if (i == 1 || i % j == 0) {
                IsDivisior = false;
                break;
            }
        }

        string str_i = to_string(i);
        int sum = 0;
        for (int j = 0; j < str_i.length(); j++) {
            sum += str_i[j] - '0';
        }
        if (sum % 2 != 0) {
            IsEven = false;
        }

        if (IsDivisior && IsEven) {
            cnt++;
        }
    }
    return cnt;

}
int main() {
    int a, b;
    cin >> a >> b;
    int cnt = CountNumber(a, b);
    cout << cnt;
    return 0;
}